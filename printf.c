#include "main.h"

/**
 * _printf - Send formatted output to stdout
 * @format: The format string
 * Return: Number of char printed to stdout
*/
int _printf(const char *format, ...)
{
int count;
conversion_t c_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_integer},
{"i", print_integer},
{NULL, NULL}
};
va_list args;

if (format == NULL)
return (-1);

va_start(args, format);

count = executor(format, c_list, args);
va_end(args);
return (count);
}
