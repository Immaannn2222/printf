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
int i = 0, j = 0, lenth = 0;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *str = va_arg(args, char *);

if (str == NULL)
str = "(none)";
for (i = 0; str[i] != '\0'; i++)
{
while ((a[j] != '\0') && (str[i] != a[j]))
j++;

		if (str[i] == a[j])
		{
_putchar(rot[j]);
lenth++;
break;
		}
		else if (a[j] == '\0')
		{
			_putchar(str[i]);
			lenth++;
		}
	}
	return (lenth);
}
