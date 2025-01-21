# Pascal's Triangle
Pascal's Triangle project for CS240

## Authors:
John Humphrey
with Adam Sabet and Jing Lin Lai

## About:
This program asks a user for input regarding the number of lines to be drawn, then draws a pyramid built of integers. Each integer is the sum of the two numbers above it. This project was originally conceived in Java and later implemented in C. Both programs are available in this repository.

## Instructions:
There are two programs here. One in Java and one in C. As long as you have Java installed on your system you should just be able to run it from your terminal / IDE of choice.

In order to run the C program you will first need to compile the program. I used and recommend [GCC - GNU Compiler Collection](https://gcc.gnu.org/). Once you have this setup you may run the compilation:

```
gcc -o triangle triangle.c   
```

After this it is merely a matter of running the program.

```
./triangle
```


## Overview:
This was lab assignment 1 in our CS 240 Data Structures and Algorithms class. We were tasked with creating a recursive algorithm of our choice. We chose Pascal's Triangle. We first collaborated on an algorithm in Java. The program was split into 3 methods. The first, main method runs the program and iteratively creates a multi-dimensional array for the triangle. Second, a recursive method that begins at the top of the triangle and performs each calculation. Third, a method to print the array. 

I had very little experience in C prior to creating the final version of the program. It was interesting relearning how pointers work. Ironically, the most challenging part of the C project was just creating the original array with proper memory allocation. Other than that, it was not a difficult transition between the languages at all.
