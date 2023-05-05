#include "main.h"
/**
 * _printf - just prints
 *
 * @format: the value to print
 * Return: returns amount of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i;

	va_list ptr;
	/* Check if format == NULL */
	if (format == NULL)
		return (-1);

	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 's':
				/* Move index forward to not print the 's' */
				i++;
				count += printString(va_arg(ptr, char *));
				/* added break as hinted in the guide to use switch in C language */
				break;
			case 'c':
				/* Move index forward to not print the 'c' */
				i++;
				count += printChar(va_arg(ptr, int));
				/* added break as hinted in the guide to use switch in C language */
				break;
			case 'd':
				/* Move index forward to not print the 'd' */
				i++;
				count += printDecimal(va_arg(ptr, int));
				/* added break as hinted in the guide to use switch in C language */
				break;
			case 'i':
				/* Move index forward to not print the 'i' */
				i++;
				count += printDecimal(va_arg(ptr, int));
				/* added break as hinted in the guide to use switch in C language */
				break;
			case '%':
				/* added break as hinted in the guide to use switch in C language */
				break;
			case '\0':
				/* error case handled */
				return (-1);
			default:
				count += printChar(format[i]);
				continue;
			}
		}
		else
			count += printChar(format[i]);
	}
	va_end(ptr);
	return count;
}

