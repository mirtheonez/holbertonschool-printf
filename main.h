#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct holberton - connect conversion specifier w/ correct print function.
 * @f: a function pointer to the print functions.
 * @X: the conversion specifier.
 */
typedef struct holberton
{
	char *X;
	int (*f)(va_list);
} holberton_t;

int _printf(const char *, ...);
int (*get_function(const char *C))(va_list);
int _putchar(char c);
int print_character(va_list valley);
int print_string(va_list valley);
int print_decimal(va_list valley);
int print_integer(va_list valley);
int print_percent(va_list valley);
#endif
