#!/usr/bin/bash
CC="clang++"
#SANITIZE="-fsanitize=address"
CCFLAGS="-Wall -Werror -Wextra -g3 -std=c++98 $SANITIZE"
TESTS_INCLUDES="-I. -I.. -I./srcs -I./srcs/utils"

# compile ft/std test_file.cpp exec_name
compile()
{
    $CC $CCFLAGS -DNAMESPACE=$1 $TESTS_INCLUDES $USER_INCLUDES $2 -o $3 &> logs/$3
    return $?
}

# Launch test via valgrind to check leaks
#   $1 -> test_name
#   $2 -> log_file
launch_valgrind()
{
    valgrind --quiet --leak-check=full --error-exitcode=42 --log-file="/dev/null" $1 &> $2
}

# Run test corresponding to function arguments: 
#   $1 -> container
#   $2 -> test_file
run_test()
{
    # Creating distinguishable test names
    local std_test_name="$1.$(echo $2 | cut -d "." -f 1).std"
    local ft_test_name="$1.$(echo $2 | cut -d "." -f 1).ft"
    local output_diff="$1.$(echo $2 | cut -d "." -f 1).diff"

    # Compiling tests
    compile std srcs/$1/$2 $std_test_name
    local std_compiled=$?
    compile ft srcs/$1/$2 $ft_test_name
    local ft_compiled=$?

    # Setting up compilation values
    local std_error=$std_compiled
    local ft_error=$ft_compiled
    local ft_leaks=0;
    if [ $std_compiled -eq 0 ]; then
        ./$std_test_name $> logs/$std_test_name
        std_error=$?
        rm -rf $std_test_name
    fi
    if [ $ft_compiled -eq 0 ]; then
        if [ $LEAKS -eq 0 ]; then
            launch_valgrind ./$ft_test_name logs/$ft_test_name
            ft_leaks=$?
        else
            ./$ft_test_name $> logs/$ft_test_name
        fi
        ft_error=$?
        rm -rf $ft_test_name
    fi

    # Setting up result (diff) values
    diff $DIFF_FORMAT logs/$std_test_name logs/$ft_test_name &> logs/$output_diff
    local diff_result=$?

    # Cleaning logs if option not set
    if [ $diff_result -eq 0 ] && [ $NO_CLEAN -eq 1 ]; then
        rm -rf logs/$std_test_name logs/$ft_test_name logs/$output_diff
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
        print_test_leaks "$1/$2" $std_compiled $ft_compiled $test_result $ft_leaks
    elif [ $TIME -eq 0 ]; then
        print_test_time "$1/$2" $std_compiled $ft_compiled $test_result
    else
        print_test_result "$1/$2" $std_compiled $ft_compiled $test_result
    fi
}

# Run all tests relative to the passed container ($1)
test_container()
{
    local test_files_directory="srcs/$1"
    local test_files=$(ls $test_files_directory | grep ".cpp")

    print_columns
    for file in ${test_files[@]}; do
        run_test $1 $file
    done
}


