#include "main.h"

/**
 * _printf - Send formatted output to stdout
 * @format: The format string
 * Return: Number of char printed to stdout
*/
int _printf(const char *format, ...)
{
va_list args;
int done;
va_start(args, format);

done = vfprintf(stdout, format, args);
va_end(args);
}
