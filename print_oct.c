#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_oct - convert number to octal
  *@args: argument
  *Return: lenth
  *
  */

int print_oct(va_list args)
{
	char octal[11];
	unsigned int x = 0, n = 0;
	int i = 0, oct = 0;

	n = va_arg(args, int);

if (n == 0)
{
_putchar('0');
x = 1;
}
else
{
while (n >= 1)
{
		oct = n % 8;
		octal[i++] = (oct + '0');
		n = n / 8;
		x++;
}

}
while (i > 0)
{

_putchar(octal[--i]);

}

return (x);
}
