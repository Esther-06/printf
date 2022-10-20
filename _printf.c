#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 *           print a formated string
 * @format: a string containing all the desired characters
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	/* calling parser func */
	printed_chars = parser(format, f_list, args);

	va_end(args);

	return (printed_chars);
}
