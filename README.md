# Cavalry

A **ft_containers** unit testing tool.

This tool was made to test **C++ [STL containers](https://cplusplus.com/reference/stl/)** (`vector`, `stack`, `map`, `set`) implementations. It compares STL output to the implementation one with the `diff` command (so it may compare undefined behaviour). It can also check for **execution speed** and **memory leaks**.

The tests results are not to be taken to the letter, but more to see the differences in behaviour between the implementation and the STL. The tests were coded with readability in mind, to easily see where the implementation differs.

I also added **speed** and **memory leaks** checks to make this testing tool thorough. More informations below.

<br/>

## How to use this tool

I wanted this tool to be **ready for use** and **all-in-one**, so the easiest way to use this tool is to:

First, clone this repository at the **root** of the implementation you want to test. Then, go into the `Cavalry` directory, and adjust (if necessary) the `USER_INCLUDE` path in `Cavalry.sh` to match where are your header files.

When that is done, you can now start the tests with the command `./Cavalry.sh` (for default mode). Then, you just need to wait for the test results.

```
$ ./Cavalry.sh
```

Not all check box will be green: I included compilation tests (some tests **must not compile!**), so always check the `Result` column.

<br/>

You can also only test specific containers, just add the name of the containers after the executable:

```
$ ./Cavalry.sh vector
$ ./Cavalry.sh stack map
```

<br/>

## Test ouputs

The test outputs and `diff` results are accessible in the `logs/[container]` directory. No logs are kept if the test is a success, except if the `--no-clean` option is used (`diff` results are never kept if there is no differences, even with this option).

<br/>

## Speed tests

To run the speed tests, just add the `--time` option to the launch command:

```
$ ./Cavalry.sh map set --time
```

It will compare execution time between the STL and the implementation, and give a `Time Ratio`. If the implementation execution time is more than **20 times slower** than the STL one, the result will be printed **red** .

_Disclaimer_: If your implementation is not fast enough, the tool may seems to be blocked, but it's just processing the tests. I based the time tests on the **STL response time**, so that the time elapsed is not too short to make a ratio, but not too long to wait after.

<br/>

## Memory tests

As said before, I also implemented **memory leaks** tests. To run them, just add the `--leaks` option to the command:

```
$ ./Cavalry.sh stack vector set --leaks
```

To use this command, you will need [Valgrind](https://valgrind.org/) installed. The command compares test results **AND** check memory leaks on thoses tests (:fire: if there is no leaks, :droplet: if there is).

_Disclaimer_: You **can't** use `--time` and `--leaks` options at the same time for performance and response time reasons.

<br/>

## Command options

We have already seen some options above, but there is other options. First, you can use the `--help` option if you want a quick overview of what options are available.

```
$ ./Cavalry.sh --help
```

<br/>

You can also use the `--no-capacity` flag with your commands to **NOT** check if your **vector** container is _capacity compliant_.

```
$ ./Cavalry.sh vector map --leaks --no-capacity
```

<br/>

There is also the `--file` option to only run specific tests (from this tool, or from another source). Just use add the tests paths after this option:

```
$ ./Cavalry.sh --file srcs/set/allocator.cpp srcs/set/clear.cpp
```

<br/>

Finally, even if this is not an option, you can clean all log files with the following command:

```
$ ./Cavalry.sh clean
```

You can also modify paths and options for some commands (valgrind, diff, compiler, flags, ...) in `Cavalry.sh` and `scripts/compile/sh` if needed.

## Notes

If you are currently doing the **ft_containers** project from **42School**, please only use this tool when you **already did you own tests**, as a way to test for things you may not have thinked about, or as a handy tool to test response time or memory leaks. And of course, if you found something wrong or want to trace back something, please leave a GitHub _Issue_.

And, if you liked this tool and found it useful, please leave a **star** :star: and share it so more people can find it. Thanks!
