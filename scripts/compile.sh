#!/usr/bin/bash
CC="clang++"
#SANITIZE="-fsanitize=address"
VALGRIND_OPTIONS="--leak-check=full --error-exitcode=42"
CCFLAGS="-Wall -Werror -Wextra -g3 -std=c++98 $SANITIZE"
TESTS_INCLUDES="-I. -I.. -I./srcs -I./srcs/utils"

# compile ft/std test_file.cpp container exec_name
compile()
{
    $CC $CCFLAGS -DNAMESPACE=$1 -DCAPACITY=$NO_CAPACITY -DLEAKS=$LEAKS $TESTS_INCLUDES $USER_INCLUDES $2 -o $4 &> logs/$3/$4
    return $?
}

# Run test corresponding to function arguments and options: 
#   $1 -> container
#   $2 -> test_file
run_test_wrapper()
{
    # Creating distinguishable test names
    test_name=$(echo $2 | cut -d "." -f 1)
    std_test_name="$1.$test_name.std"
    ft_test_name="$1.$test_name.ft"
    output_diff="$1.$test_name.diff"
    mkdir -p ./logs/$1

    # Compiling tests
    compile std srcs/$1/$2 $1 $std_test_name
    std_compiled=$?
    compile ft srcs/$1/$2 $1 $ft_test_name
    ft_compiled=$?

    std_error=$std_compiled
    ft_error=$ft_compiled
    # Setting up STD tests return values for basic, leaks and time modes
    if [ $std_compiled -eq 0 ]; then
        if [ $TIME -eq 0 ]; then
            std_time=$(/usr/bin/time -f "%e" ./$std_test_name 2>&1 > logs/$1/$std_test_name)
            std_error=$?
        else
            ./$std_test_name &> logs/$1/$std_test_name
            std_error=$?
        fi
        rm -rf $std_test_name
    fi

    # Setting up FT tests return values for basic, leaks and time modes
    if [ $ft_compiled -eq 0 ]; then
        if [ $LEAKS -eq 0 ]; then
            valgrind $VALGRIND_OPTIONS  --log-file=logs/$1/$1.$test_name.leaks ./$ft_test_name &> logs/$1/$ft_test_name
            ft_error=$?
        elif [ $TIME -eq 0 ]; then
            ft_time=$(/usr/bin/time -f "%e" ./$ft_test_name 2>&1 > logs/$1/$ft_test_name)
            ft_error=$?
        else
            ./$ft_test_name &> logs/$1/$ft_test_name
            ft_error=$?
        fi
        rm -rf $ft_test_name
    fi

    # Setting up result (diff) values
    diff $DIFF_FORMAT logs/$1/$std_test_name logs/$1/$ft_test_name &> logs/$1/$output_diff
    local diff_result=$?

    # Cleaning logs if option not set
    if [ $diff_result -eq 0 ] && [ $NO_CLEAN -eq 1 ]; then
        rm -rf logs/$1/$std_test_name logs/$1/$ft_test_name logs/$1/$output_diff
    fi
    if [ $ft_error -eq 0 ] && [ $LEAKS -eq 0 ] && [ $NO_CLEAN -eq 1 ]; then
        rm -rf logs/$1/$1.$test_name.leaks
    fi


    # Computing test result
    local test_result=1
    if [ $diff_result -eq 0 ] && [ $std_compiled -eq 0 ] && [ $ft_compiled -eq 0 ] \
        && [ $std_error = 0 ] && [ $ft_error = 0 ]; then
        test_result=0
    else
        test_result=1
    fi
    
    #Printing test results
    if [ $LEAKS -eq 0 ]; then
        print_test_leaks "$1/$2" $std_compiled $ft_compiled $test_result $ft_error
    elif [ $TIME -eq 0 ]; then
        print_test_time "$1/$2" $std_compiled $ft_compiled $test_result $std_time $ft_time
    else
        print_test_result "$1/$2" $std_compiled $ft_compiled $test_result
    fi
}

# Run all tests relative to the passed container ($1)
test_container()
{
    local test_files_directory="srcs/$1"
    local test_files=$(ls $test_files_directory | grep ".cpp")

    if [ $LEAKS -eq 0 ]; then
        print_columns_leaks
    elif [ $TIME -eq 0 ]; then
        print_columns_time
    else
        print_columns_result
    fi
    
    for file in ${test_files[@]}; do
        run_test_wrapper $1 $file
    done
}


