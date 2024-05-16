# ft_printf

## Introduction

In this project, you will discover a popular and versatile C function: `printf()`. The goal is to recode `printf()` from scratch, providing you with an opportunity to improve your programming skills. You'll learn about variadic functions in C and how to structure and extend your code effectively.

## Common Instructions

- Your project must be written in C and must adhere to the Norm.
- Functions should not quit unexpectedly, and memory should be properly managed to avoid leaks.
- If required, your project must include a Makefile that compiles with the flags `-Wall`, `-Wextra`, and `-Werror`.
- The Makefile must contain rules for `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- If your project includes bonus functionalities, they should be separated from the mandatory part and evaluated separately.
- If you use your `libft`, include its sources and Makefile in a `libft` folder. Your project's Makefile should compile the library by using its Makefile.
- It's recommended to create test programs for your project to facilitate testing during development and defense.

## Mandatory Part

### Program Name
`libftprintf.a`

### Turn-in Files
`Makefile`, `*.h`, `*/*.h`, `*.c`, `*/*.c`

### External Functions Allowed
`malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`

### Description
Write a library that contains `ft_printf()`, a function that will mimic the original `printf()`. The prototype of `ft_printf()` is:

```c
int ft_printf(const char *, ...);
```
# Requirements:

Don’t implement the buffer management of the original printf().
Handle the following conversions: cspdiuxX%.
Your function will be compared against the original printf().
Create libftprintf.a using the ar command.
Conversions to Implement
%c: Prints a single character.
%s: Prints a string (as defined by the common C convention).
%p: Prints the void pointer argument in hexadecimal format.
%d: Prints a decimal (base 10) number.
%i: Prints an integer in base 10.
%u: Prints an unsigned decimal (base 10) number.
%x: Prints a number in hexadecimal (base 16) lowercase format.
%X: Prints a number in hexadecimal (base 16) uppercase format.
%%: Prints a percent sign.
Bonus Part
Bonus List
Manage any combination of the flags: '-', '0', and the field minimum width under all conversions.
Manage all the following flags: '#', '+', and space.
If you plan to complete the bonus part, consider the implementation of your extra features from the start. The bonus part will only be assessed if the mandatory part is perfect.

Submission and Peer-evaluation
Submit your assignment to your Git repository. Only the work inside your repository will be evaluated during the defense. Ensure the file names are correct.

Once this assignment is passed, you'll be allowed to add your ft_printf() to your libft for use in your school C projects.
