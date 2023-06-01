#include "main.h"
/**
 * checkFormat - checks a format
 *
 * @formatChar: char
 * @ptr: ptr
 * @i: i
 * Return: integer
 */
int checkFormat(va_list ptr, char formatChar, int *i)
{
	switch (formatChar)
	{
	case 's':
		(*i)++;
		return (print_string(ptr));
	case 'c':
		(*i)++;
		return (print_character(ptr));
	case 'd':
		(*i)++;
		return (print_decimal(ptr));
	case 'i':
		(*i)++;
		return (print_decimal(ptr));
	case '%':
		(*i)++;
		return (print_character(ptr));
	case '\0':
		return (-1);
	default:
		return (print_character(ptr));
	}
	return (0);
}
