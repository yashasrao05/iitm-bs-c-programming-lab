# Template expander

The goal of this project is to write a simple template expander in C.  This will be used to generate a series of "form letters" to be sent to students with their marks and grades.

The input to this program will be two files:

- `template.txt`: this contains the text that needs to be sent, but has some placeholders (described below) that need to be expanded.
- `students.csv`: This is a CSV (comma-separated values) file that contains a list of students for whom you need to create the form letters.

## Template expansion

Consider the following template file:

```
To,
{name} (roll no. {rollno})
Student of BS-ES course, IIT Madras

Dear {name},

You scored {marks} marks in the exam, and your grade is {grade}.

Sincerely,
The Dean
```

In this text, any parts that are placed within curly brackets (eg. `{name}`, `{rollno}` etc) are *placeholders* that need to be replaced with the appropriate text.  For example, if we had the following information:

```
name: Nitin C
rollno: abc123
marks: 50
```

then you need to expand the text as 

```
To,
Nitin C (roll no. abc123)
Student of BS-ES course, IIT Madras

Dear Nitin C,

You scored 50 marks in the exam, and your grade is D.

Sincerely,
The Dean
```

Note that in the above text, the `{grade}` was not specified, but needs to be computed with the following formula for marks:

- marks >= 90: S
- 90 > marks >= 80: A
- 80 > marks >= 70: B
- 70 > marks >= 60: C
- 60 > marks >= 50: D
- 50 > marks >= 40: E
- marks < 40: U

## CSV input file

The list of students will be given to you as a CSV (comma-separated values) file.  This contains a list of entries where each line is one student, and the data are separated by the *comma* (`,`) symbol.  For example:

```
Nitin C,abc123,50
Richard Feynman,xyz987,85
D Ritchie,iop567,99
```

You need to generate one output file for each user, and the name of the file should be `{rollno}.txt`.  For example, the files for this CSV will be

```
abc123.txt
xyz987.txt
iop567.txt
```

## Problem statement

Write a program in C that will read the template file and the CSV file, and generate a set of output files in the correct format.

## Requirements and Useful Information

### Code structure

You are required to define a `struct` type called `student_t` that holds the required information.  The struct should contain strings and numeric types as required to store the information.  The strings should be of maximum length 20 characters, and the marks should be a non-negative integer.

Define functions for the following:

- `read_csv`: should read from a given filename and return an array of structs
- `compute_grade(student_t)`: take a student struct as input and return the grade
- `write_file(student_t)`: create a file for the given roll number and write the output

### Useful functions

- [`strtok`](https://en.cppreference.com/w/c/string/byte/strtok)
- [`sprintf`](https://en.cppreference.com/w/c/io/fprintf)
- [`strstr`](https://en.cppreference.com/w/c/string/byte/strstr)

You should be able to read the CSV file using the `strtok` function, but you can also use any other C functions if needed.  The `sprintf` function can be used to generate the filenames into which you need to save the outputs, and also to generate the output if needed (although you can also use `fprintf` directly for that).

The `strstr` function can be useful to find placeholders and replace them with format specifiers (such as `%s`).

## Assignment

Demonstrate the template expander code to the TA.  You should *NOT* hard-code the template or the variables in your program, but should do it according to what you find in the template text file.
