#!/usr/bin/bash

RESET="\e[0m"
BOLD="\e[1m"
FAINT="\e[2m"
ITALIC="\e[3m"
UNDERLINE="\e[4m"
BLINK="\e[5m"

BLACK="\e[30m"
RED="\e[31m"
GREEN="\e[32m"
YELLOW="\e[33m"
BLUE="\e[34m"
MAGENTA="\e[35m"
CYAN="\e[36m"
LIGHT_GRAY="\e[37m"
GRAY="\e[90m"
LIGHT_RED="\e[91m"
LIGHT_GREEN="\e[92m"
LIGHT_YELLOW="\e[93m"
LIGHT_BLUE="\e[94m"
LIGHT_MAGENTA="\e[95m"
LIGHT_CYAN="\e[96m"
WHITE="\e[97m"

BACK_BLACK="\e[40m"
BACK_RED="\e[41m"
BACK_GREEN="\e[42m"
BACK_YELLOW="\e[43m"
BACK_BLUE="\e[44m"
BACK_MAGENTA="\e[45m"
BACK_CYAN="\e[46m"
BACK_LIGHT_GRAY="\e[47m"
BACK_GRAY="\e[100m"
BACK_LIGHT_RED="\e[101m"
BACK_LIGHT_GREEN="\e[102m"
BACK_LIGHT_YELLOW="\e[103m"
BACK_LIGHT_BLUE="\e[104m"
BACK_LIGHT_MAGENTA="\e[105m"
BACK_LIGHT_CYAN="\e[106m"
BACK_WHITE="\e[107m"

SUCCESS="\U2705"
FAIL="\U274C"

LEAK="\U1F30A"
NO_LEAK="\U1F525"

# Transform function return status code to string:
#   $1 -> status code
transform_status()
{
    if [ $1 -eq 0 ]; then
        printf "${LIGHT_GRAY}${BOLD}${BACK_GREEN}OK${RESET}"
    else
        printf "${LIGHT_GRAY}${BOLD}${BACK_RED}KO${RESET}"
    fi

}

# Print 'Succes' emoji if $1 == 0, else print 'Fail' emoji
print_emoji_result()
{
    if [ $1 -eq 0 ]; then
        printf "${SUCCESS}"
    else
        printf "${FAIL}"
    fi
}

# Print 'No Leak' emoji if $1 == 0, else print 'Leak' emoji
print_emoji_leak()
{
    if [ $1 -eq 0 ]; then
        printf "${NO_LEAK}"
    else
        printf "${LEAK}"
    fi
}

# Call bc and return value corresponding to operators and operands
#   $1 -> first operand
#   $2 -> second operand
#   $3 -> operator
call_bc()
{
    # Running it in quiet mode, and discarding possible errors like division by 0
    printf "%s" "$(echo "scale=2; $1 $3 $2" | bc -q 2> /dev/null)"
}

# Print test status and leaks:
#   $1 -> test path
#   $2 -> std compilation
#   $3 -> ft compilation
#   $4 -> test result
#   $5 -> ft test leaks
print_test_leaks()
{
    local std_compiled=$(print_emoji_result $2)
    local ft_compiled=$(print_emoji_result $3)
    local result=$(transform_status $4)
    local result_leaks=$(print_emoji_leak $5)

    printf "%-33s|       (Y)[%s]   [%s](Y)      |   [%s]  [%s] \n" "$1" "$std_compiled" "$ft_compiled" "$result" "$result_leaks"
}

# Print test status and execution time:
#   $1 -> test path
#   $2 -> std compilation
#   $3 -> ft compilation
#   $3 -> test result
#   $4 -> std test time
#   $5 -> ft test time
print_test_time()
{
    local std_compiled=$(print_emoji_result $2)
    local ft_compiled=$(print_emoji_result $3)
    local result=$(call_bc $ft_time $std_time "/")
    
    # If compilation error, can't compare times
    if [ $2 -eq 1 ]; then
        if [ $3 -eq 1 ]; then
            printf "%-33s|        [${BOLD}${RED}%s${RESET}]  [${BOLD}${RED}%s${RESET}]        |    [${BOLD}${MAGENTA}%s${RESET}]\n" "$1" "COMP" "COMP" "ERROR"
        else
            printf "%-33s|        [${BOLD}${RED}%s${RESET}]  [${BOLD}${GREEN}%s${RESET}]        |   [${BOLD}${MAGENTA}%s${RESET}]\n" "$1" "COMP" "$ft_time" "ERROR"
        fi
    elif [ $3 -eq 1 ]; then
            printf "%-33s|        [${BOLD}${GREEN}%s${RESET}]  [${BOLD}${RED}%s${RESET}]        |   [${BOLD}${MAGENTA}%s${RESET}]\n" "$1" "$std_time" "COMP" "ERROR"
    else

    # If dividing by zero, time ratio is infinity
    if [ -z $result ]; then
        local sum_time=$(call_bc $std_time $ft_time "+")
        # If ft_time is less than 0.20 seconds, comparing to 0.00 from std_time
        if [ $(call_bc $sum_time "0.20" "<=") -eq 1 ]; then
            printf "%-33s|        [${BOLD}${GREEN}%s${RESET}]  [${BOLD}${GREEN}%s${RESET}]        |   [${BOLD}${MAGENTA}%s${RESET}]\n" "$1" "$std_time" "$ft_time" "INFINITY"
        else
            printf "%-33s|        [${BOLD}${GREEN}%s${RESET}]  [${BOLD}${RED}%s${RESET}]        |   [${BOLD}${MAGENTA}%s${RESET}]\n" "$1" "$std_time" "$ft_time" "INFINITY"
        fi

    # If time ratio is within the x20 time limit
    elif [ $(call_bc $result "20" "<=") -eq 1 ]; then
        printf "%-33s|        [${BOLD}${GREEN}%s${RESET}]  [${BOLD}${GREEN}%s${RESET}]        |    [${BOLD}${GREEN}%s${RESET}]\n" "$1" "$std_time" "$ft_time" "x$result"
    
    # If time ratio is not within the x20 time limit
    else
        printf "%-33s|        [${BOLD}${GREEN}%s${RESET}]  [${BOLD}${RED}%s${RESET}]        |    [${BOLD}${RED}%s${RESET}]\n" "$1" "$std_time" "$ft_time" "x$result"
    fi

    fi
}

# Print test status:
#   $1 -> test path
#   $2 -> std compilation
#   $3 -> ft compilation
#   $4 -> test result
#   $5 -> should compile ('Y' or 'N')
print_test_result()
{
    local std_compiled=$(print_emoji_result $2)
    local ft_compiled=$(print_emoji_result $3)
    local result=$(transform_status $4)


    printf "%-33s|       ($5)[%s]   [%s]($5)      |      [%s]\n" "$1" "$std_compiled" "$ft_compiled" "$result"
}

print_header()
{

HEADER=$(cat << "EOF"
################################################################################
#                       _____                 _                                #
#                      / ____|               | |                               #
#                     | |     __ ___   ____ _| |_ __ _   _                     #
#                     | |    / _` \ \ / / _` | | '__| | | |                    #
#                     | |___| (_| |\ V / (_| | | |  | |_| |                    #
#                      \_____\__,_| \_/ \__,_|_|_|   \__, |                    #
#                                                     __/ |                    #
#                                                    |___/                     #
#                         A ft_containers testing tool           by lchapren   #
#                                                                              #
################################################################################
EOF
)

printf "${BOLD}${LIGHT_CYAN}%s${RESET}\n\n" "$HEADER"

}

print_columns_leaks()
{

COLUMNS=$(cat << "EOF"
            Test name            |    [STD] Compilation [FT]    |  Result+Leaks
---------------------------------|------------------------------|---------------
EOF
)

printf "%s\n" "$COLUMNS"
}

print_columns_time()
{

COLUMNS=$(cat << "EOF"
            Test name            |   [STD] Time Elapsed [FT]    |   Time Ratio  
---------------------------------|------------------------------|---------------
EOF
)

printf "%s\n" "$COLUMNS"
}

print_columns_result()
{

COLUMNS=$(cat << "EOF"
            Test name            |    [STD] Compilation [FT]    |     Result    
---------------------------------|------------------------------|---------------
EOF
)

printf "%s\n" "$COLUMNS"
}