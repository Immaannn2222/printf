#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_char - a fun taht prints a character
  *@args: its arguments
  *
  *Return: 1
  */
int print_char(va_list args)
{
char c = va_arg(args, int);
_putchar(c);
return (1);
}
/**
  *print_string - a fun taht prints a string
  *@args: its arguments
  *
  *Return: length
  */
int print_string(va_list args)
{
char *s = va_arg(args, char *);
int i = 0;
if (s == NULL)
s = "(nil)";
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
return (i);
}
/**
  *print_percent - a fun taht prints a percent sign
  *@args: its arguments
  *
  *Return: 1
  */
int print_percent(va_list __attribute__((unused)) args)
{
_putchar('%');
return (1);
}
/**
  *print_integer - a fun taht prints an unsigned integer
  *@args: its arguments
  *
  *Return: x
  */
int print_integer(va_list args)
{
int i, a[10], x = 0;
unsigned int j = 0;
int n = va_arg(args, int);
j = n;
if (n != 0)
{
for (i = 0; j > 0; i++)
{
a[i] = j % 10;
j = j / 10;
}
x = i;
while (i > 0)
{
_putchar(a[i - 1] + '0');
i--;
}
}
else
_putchar('0');
return (x);
}
/**
  *print_d - a fun taht prints an integer
  *@args: its arguments
  *
  *Return: x
  */
int print_d(va_list args)
{
int i, a[10], x = 0;
unsigned int j = 0;
int n = va_arg(args, int);
j = n;
if (n < 0)
{
j = -n;
_putchar('-');
}
if (n != 0)
{
for (i = 0; j > 0; i++)
{
a[i] = j % 10;
j = j / 10;
}
x = i;
while (i > 0)
{
_putchar(a[i - 1] + '0');
i--;
}
}
else
_putchar('0');
return (x + 1);
}
