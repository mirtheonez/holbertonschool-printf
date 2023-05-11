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
		return (printString(va_arg(ptr, char *)));
	case 'c':
		(*i)++;
		return (printChar(va_arg(ptr, int)));
	case 'd':
		(*i)++;
		return (printDecimal(va_arg(ptr, int)));
	case 'i':
		(*i)++;
		return (printDecimal(va_arg(ptr, int)));
	case 'b':
		(*i)++;
		return (printBinary(va_arg(ptr, int)));
	case '%':
		(*i)++;
		return (printChar(formatChar));
	case '\0':
		return (-1);
	default:
		return (printChar(formatChar));
	}
	return (0);
}
