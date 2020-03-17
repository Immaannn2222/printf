#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_bin - converts dec to bin.
 * @args: argument.
 * Return: lenth.
 */
int print_bin(va_list args)
{
unsigned int b = va_arg(args, int);
unsigned int bin[32];
int i = 0;
int len = 0;
int j;

if (b == 0)
{
_putchar('0');
len++;
return (len);
}
else
while (b > 0)
{
bin[i] = b % 2;
b = b / 2;
i++;
len++;
}
j = i - 1;
while (j >= 0)
{
_putchar(bin[j] + 48);
j--;
}
return (len);
}
