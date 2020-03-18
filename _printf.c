#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define putchar1 {_putchar(format[i]);\
lenth++;\
i++;\
}
#define print10 {_putchar('%');\
_putchar(format[i]);\
lenth += 2;\
i++;\
}

/**
  *_printf - function that print anything
  *@format: is a character string.
  *Return: the number of characters printed
  */

int _printf(const char *format, ...)
{
int i = 0, lenth = 0;
va_list arg;
int (*print)(va_list);
va_start(arg, format);
if (format == NULL)
return (-1);
while (format[i] != '\0')
{
while (format[i] != '%' && format[i] != '\0')
{
putchar1
}
if (format[i] == '%' && format[i + 1] == '\0')
continue;
if (format[i] == '%')
{
i++;
for (format[i] == '+' || format[i] == ' ' || format[i] == '#')
i++;
if (format[i] == '\0')
return (lenth);
else
{
print = get_spec_char(&format[i]);
if (print == NULL)
print10
else
{
lenth += print(arg);
i++;
}
}
}
}
va_end(arg);
return (lenth);
}
