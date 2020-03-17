#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_pointer - print pointer 
 * @args: argument.
 * Return: lenth.
 */
int print_unsig_int(va_list args)
{
int i, a[10], x = 0;
unsigned int j = 0;
unsigned int n = va_arg(args, int);
j = n;
if (n <= 1)
{
j = -n;
_putchar('-');
x = 1;
}
if (n != 0)
{
for (i = 0; j > 0; i++)
{
a[i] = j % 10;
j = j / 10;
}
x += i;
while (i > 0)
{
_putchar(a[i - 1] + '0');
i--;
}
}
else
{
_putchar('0');
return (1);
}
return (x);
}
