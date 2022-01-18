#!/usr/bin/bash
source scripts/option.sh
source scripts/format.sh
source scripts/compile.sh

CONTAINERS=()

DIFF_FORMAT="-u"
USER_INCLUDES="-I.. -I../utils -I../iterator -I../binary_tree"

# TO-DO: help command and error output

# Check if every container in the argument list can be tested
check_containers()
{
    tested_containers=(vector stack map set)
    for container in $@; do
        tested=1
        for tested_container in ${tested_containers[@]}; do
            if [ $container = $tested_container ]; then
                tested=0
                break
            fi
        done
        if [ $tested -ne 0 ]; then
            printf "%s\n" "$container cannot be tested. Tested containers are: vector, stack, map and set"
            exit 1
        fi
    done
}

main()
{
    print_header

    # Setting up tested containers and options
    parse_options $@
    if [ ${#CONTAINERS[@]} -eq 0 ]; then
        CONTAINERS=(vector stack map set)
    fi

    # Printing help if requested
    if [ $HELP -eq 0 ]; then
        print_help
    fi

    # Removing logs and executables if requested
    if [ $# -eq 1 ] && [ $1 = "clean" ]; then
        rm -rf *.std *.ft logs/*
        echo "Cleaned!"
        exit 0
    fi
    

    # Launching tests
    check_containers ${CONTAINERS[@]}
    for container in ${CONTAINERS[@]}; do
        test_container $container
    done
}

main $@