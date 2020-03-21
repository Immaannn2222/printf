#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *rot13 - function that encodes a string using rot13.
 *@args: char
 *Return: x
 */
int rot13(va_list args)
{
unsigned int i = 0, j = 0;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *str;
str = malloc(sizeof(1024));
if (str == NULL)
return (0);
str = va_arg(args, char *);
if (str == NULL)
str = "(ahyy)";
for (i = 0; str[i] != '\0'; i++)
{
while (a[j] != '\0')
{

		if (a[j] == str[i])
		{
_putchar(rot[j]);

break;
		}
		j++;
	}
	if (j >= 52)
	{
		_putchar(str[i]);
	}

	j = 0;
}
	return (i);
}
