#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...);
/**
* struct conversion - Structure for symbols and conversion function
* @symbol: The symbol
* @func: The function associated
*/
struct conversion
{
	char *symbol;
	int (*func)(va_list);
};
typedef struct conversion conversion_t;

int executor(const char *format, conversion_t c_list[], va_list args);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list args);

#endif
