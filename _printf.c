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
				i++;
				count += printString(va_arg(ptr, char *));
				break;
			case 'c':
				i++;
				count += printChar(va_arg(ptr, int));
				break;
			case 'd':
				i++;
				count += printDecimal(va_arg(ptr, int));
				break;
			case 'i':
				i++;
				count += printDecimal(va_arg(ptr, int));
				break;
			case '%':
				break;
			case '\0':
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

