#include "main.h"

/**
 * get_function - determine which print function to use.
 *
 * @C: The character that identifies the type of the variable to print.
 *
 * Return: pointer to the matching print function.
 */

int (*get_function(const char *C))(va_list)
{
	int i;
	holberton_t types[] = {
		{"s", print_string},
		{"c", print_character},
		{"d", print_decimal},
		{"i", print_integer},
		{"%", print_percent},
		{NULL, NULL},
	};
	for (i = 0; types[i].X; i++)
	{
		if (*C == types[i].X[0])
			return (types[i].f);
	}
	return (NULL);
}
