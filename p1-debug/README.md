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

- `help`: request help about any other command.
- `list` (or shortened to *li*): print a listing of the source.  This will print 10 lines of code by default, and repeatedly running this command will print 10 more lines from the last location.  
    - `list <n>`: by specifying a number `<n>`, you can start listing from that line number.  So once you reach the end of the file for example you can go back to any other place like this.
    - `list <source>:<n>`: if your executable consists of multiple source files, you can specify the source file name here
- `run`: Run the program - assumes you have already loaded the program by giving it as part of the command line.  Will try to run all the way to the end, unless there is a *breakpoint* or some error occurs
- `info`: Used to get information about various aspects of your code
    - `info break`: display list of breakpoints you have set
    - `info watch`: display variables being watched
- `break <n>`: set a *breakpoint* on line `<n>` of the code.  ***If*** the program reaches this line of code, then it will stop.  Note that:
    - you may never actually reach this line of code
    - the line must contain actual executable code, cannot be just a comment or empty line
    - `break <source>:<n>`: set the breakpoint in the specified source file
- `watch <expr>`: Print the value of the expression any time there is a *change* in value.  Good for automatically detecting updates.  Can also be used with a variable name to see any time the variable changes.
    - ***Important***: The variable *must* be in scope, else you get an error.  This is a common source of problems while debugging
- `bt`: (short for *backtrace*): this shows you the stack trace - list of functions that have been called up to this point.  You can move up and down within the trace and examine variables at different levels.

## Assignment

Two examples of debugging are discussed in class.  You need to debug the other two and show them to the TAs.
