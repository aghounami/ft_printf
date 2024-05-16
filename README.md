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
