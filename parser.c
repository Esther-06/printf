#include "main.h"

/**
 * parser - Receives the main string and all the necessary parameters to
 *          print a formated string.
 * @format: A string containing all the desired characters
 * @f_list: A list of all the possible functions
 * @args: A list containing all the arguements passed to the program
 *
 * Return: All printed characters
 */

int parser(const char *format, conver_t f_list[], va_list args)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					r_val = f_list[j].f(args);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
