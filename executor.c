#include "main.h"

/**
 * executor - Handle specifier check and call relevant function
 * @format: The format string
 * @c_list: An array of element of type conversion_t
 * @args: List of arguments
 * Return: int
*/
int executor(const char *format, conversion_t c_list[], va_list args)
{
int i, j, r_val, count;

count = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{

for (j = 0; c_list[j].symbol != NULL; j++)
{
if (format[i + 1] == c_list[j].symbol[0])
{
r_val = c_list[j].func(args);
if (r_val == -1)
return (-1);
count += r_val;
break;
}
}
if (c_list[j].symbol == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_putchar(format[i]);
_putchar(format[i + 1]);
count = count + 2;
}
else
return (-1);
}
i = i + 1;
}
else
{
_putchar(format[i]);
count++;
}
}
return (count);

}
