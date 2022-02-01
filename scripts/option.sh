#!/usr/bin/bash

# Options variables: 0 -> ON, 1 -> OFF
HELP=1
NO_CLEAN=1
NO_CAPACITY=1
LEAKS=1
TIME=1
FILE=1

parse_options()
{
    for arg in "$@"; do
        shift
        case $arg in
            --help)
                HELP=0
                continue
                ;;
            --no-clean)
                NO_CLEAN=0
                continue
                ;;
            --no-capacity)
                NO_CAPACITY=0
                continue
                ;;
            --leaks)
                LEAKS=0
                continue
                ;;
            --time)
                TIME=0
                continue
                ;;
            --file)
                FILE=0
                continue
                ;;
            *) CONTAINERS+=("$arg")
            ;;
        esac
    done
}

print_help()
{
    
HELPER=$(cat << "EOF"
This is a ft_containers testing tool. It checks if your containers are alike the
one in the STL by comparing tests output that are done with the STL containers
and then with your containers.

To run the tests, simply type './Cavalry.sh' to run the tests on all the
supported containers.
If you want to run tests for a specific (or multiple) container, simply add the
container name to the command ('./Cavalry.sh vector' or './Cavalry.sh vector map')
Supported containers are vector, stack, map and set.

In addition, this testing tool implements the following options / modes. Just add
the option to the command line :
(i.e './Cavalry.sh --help' or './Cavalry.sh --file --leaks'))
    -> --help: print this message
    -> --no-clean: don't clean the logs even if the test result is 'OK'. 
Useful to easily see a test output (auto clean by default if test is 'OK')
    -> --no-capacity: don't print the capacity of the vector in tests output,
as it may vary with your implementation
    -> --leaks: run the test with your container (not the STL one, just yours)
with valgrind to see if it leaks. If it does, output the leaks to a log file
    -> --time: run the time tests on the specific container (or file),
output the different times, and the ratio between them
    -> --file: run the files passed in the command line, and not all tests from a
container (i.e './Cavalry.sh --file srcs/vector/allocator.cpp srcs/map/clear.cpp')

Notes:
    --leaks mode and --time mode cannot be used at the same time.
    --file mode can also be used with --leaks or --time.
    See README for detailed informations
EOF
)

printf "%s\n\n" "$HELPER"
exit 0
}