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

	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 's':
				count += printString(va_arg(ptr, char *));
			case 'c':
				count += printChar(va_arg(ptr, int));
			case 'd':
				count += printDecimal(va_arg(ptr, int));
			case 'i':
				count += printDecimal(va_arg(ptr, int));
			default:
				printChar('%');
				count++;
				continue;
			}
		}
		else
			count += printChar(format[i]);
	}
	va_end(ptr);

	return count;
}
