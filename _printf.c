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
			count += checkFormat(ptr, format[i + 1], &i);
		}
		else
			count += printChar(format[i]);
	}
	va_end(ptr);
	return (count);
}
