#!/usr/bin/bash
CC="clang++"
CCFLAGS="-Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address"

TESTS_INCLUDES="-I. -Isrc/utils"
USER_INCLUDES="-I../ -I../utils -I../iterator"

# compile ft/std test_file.cpp exec_name
compile()
{
    $CC $CCFLAGS -DNAMESPACE=$1 $TESTS_INCLUDES $USER_INCLUDES $2 -o $3 &> logs/$3
    return $?
}

# Run test corresponding to function arguments: 
#   $1 -> container
#   $2 -> test_file
run_test()
{
    # Creating distinguishable test names
    local std_test_name="$1.$(echo $2 | cut -d "." -f 1).std"
    local ft_test_name="$1.$(echo $2 | cut -d "." -f 1).ft"
    local output_diff="diff.$1.$(echo $2 | cut -d "." -f 1)"

    # Compiling tests
    compile std src/$1/$2 $std_test_name
    local std_compiled=$?
    compile ft src/$1/$2 $ft_test_name
    local ft_compiled=$?

    # Setting up compilation values
    if [ $std_compiled -eq 0 ]; then
        ./$std_test_name $> logs/$std_test_name
        rm -rf $std_test_name
    fi
    if [ $ft_compiled -eq 0 ]; then
        ./$ft_test_name $> logs/$ft_test_name
        rm -rf $ft_test_name
    fi

    # Setting up result (diff) values
    diff logs/$std_test_name logs/$ft_test_name &> logs/$output_diff
    local diff_result=$?

    # Cleaning logs if option not set
    if [ $diff_result -eq 0 ] && [ $NO_CLEAN -eq 1 ]; then
        rm -rf logs/$std_test_name logs/$ft_test_name logs/$output_diff
    fi

    # Printing test result
    print_test_result "$1/$2" $std_compiled $ft_compiled $diff_result
}

# Run all tests relative to the passed container ($1)
test_container()
{
    local test_files_directory="src/$1"
    local test_files=$(ls $test_files_directory | grep ".cpp")
    for file in ${test_files[@]}; do
        run_test $1 $file
    done
}


