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
	unsigned int x = 0, num = 0;
	int i = 0, oct = 0;

	num = va_arg(args, int);

if (num == 0)
{
_putchar('0');
x += 1;
}
else
while (num != 0)
{
		oct = num % 8;
		octal[i++] = (oct + '0');
		num = num / 8;
		x++;
}

while (i > 0)
{
_putchar(octal[i--]);
}

return (x);
}
