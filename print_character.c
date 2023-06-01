#include "main.h"
#include <stdio.h>

/**
 * print_character - Prints a char.
 * @valley: Va_list containing the char to print as the next element.
 *
 * Return: The number of bytes printed.
 */

int print_character(va_list valley)
{
	char c = va_arg(valley, int);
	int count = 0, retval;

	retval = _putchar(c);
	if (retval == -1)
		return (-1);
	count++;

	return (count);
}
