#include "main.h"

/**
 * print_char - Prints character by character
 * @args: list of arguements
 * Return: 1 if success
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @args: list of arguements
 * Return: 1 if success
 */
int print_string(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(NULL)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percent - prints percent symbol
 * @args: list of arguements
 * Return: non zero int if success
 */
int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
