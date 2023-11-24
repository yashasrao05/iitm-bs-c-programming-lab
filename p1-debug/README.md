# Using the GNU Debugger

`gdb` is a program that can be used to *debug* executable programs.  In principle you can use it to debug any executable program, but it is best used together with compilers that generate debugging information and include it in the executable.  In particular, it is possible to use a C compiler to add debugging information that can be used.

Some basic instructions that can be helpful for debugging are given here.  The links provided here are also useful references, but please use them with care as we cannot take responsibility for the accuracy or suitability of information from external sites.

## Invoking GDB

First we need to compile the program with debugging enabled.  For this we provide the `-g` flag to the `gcc` compiler.

```sh
gcc -g ex1-prime-c -o ex1-prime
```

We can then start the debugger using the command

```sh
gdb ex1-prime
```

This will give us an interactive prompt where we can type further commands.  Some useful commands are listed below.

## Useful commands for GDB

