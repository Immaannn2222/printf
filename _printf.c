#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
  *_printf - function that print anything
  *@format: is a character string.
  *
  *Return: the number of characters printed
  */

int _printf(const char *format, ...)
{
va_list args;
unsigned int i = 0;
int lenth = 0;
va_start(args, format);
if (format == NULL)
return (-1);
while (format[i] != '\0' && format)
{
++lenth;
if (format[i] == ' ')
break;
if (format[i] != '%')
_putchar(format[i]);
else
{
lenth += get_spec_char(format[i + 1], args) - 1;
i = i + 1;
}
i++;
}
va_end(args);
return (lenth);
}
