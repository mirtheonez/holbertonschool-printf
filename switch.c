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
		/* Move index forward to not print the 's' */
		(*i)++;
		return (printString(va_arg(ptr, char *)));
		/* added break as hinted in the guide to use switch in C language */
		break;
	case 'c':
		/* Move index forward to not print the 'c' */
		(*i)++;
		return (printChar(va_arg(ptr, int)));
		/* added break as hinted in the guide to use switch in C language */
		break;
	case 'd':
		/* Move index forward to not print the 'd' */
		(*i)++;
		return (printDecimal(va_arg(ptr, int)));
		/* added break as hinted in the guide to use switch in C language */
		break;
	case 'i':
		/* Move index forward to not print the 'i' */
		(*i)++;
		return (printDecimal(va_arg(ptr, int)));
		/* added break as hinted in the guide to use switch in C language */
		break;
	case 'b':
		/* Move index forward to not print the 'i' */
		(*i)++;
		return (printBinary(va_arg(ptr, int)));
		/* added break as hinted in the guide to use switch in C language */
		break;
	case '%':
		(*i)++;
		return (printChar(formatChar));
	case '\0':
		/* error case handled */
		return (-1);
	default:
		return (printChar(formatChar));
	}
	return (0);
}
