#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @sym: the operator
 * @f: function associated
 */

typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} conver_t;

int parser(const char *format, conver_t f_list[], va_list args);
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);


#endif /* MAIN_H */
