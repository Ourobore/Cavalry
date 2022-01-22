#!/usr/bin/bash

# Options variables: 0 -> ON, 1 -> OFF
HELP=1
NO_CLEAN=1
NO_CAPACITY=1
LEAKS=1
TIME=1

parse_options()
{
    for arg in $@; do
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
            *) CONTAINERS+=("$arg")
            ;;
        esac
    done
}

print_help()
{
    echo "// To do: print help"
    exit 0
}