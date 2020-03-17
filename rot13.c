#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *rot13 - function that encodes a string using rot13.
 *@s: char
 *Return: s
 */
int rot13(va_list args)
{
int i = 0, j = 0, x = 0;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *str = va_arg(args, char *);
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (str[i] == a[j])
{
str[i] = rot[j];
break;
}
}
}
x = i;
while (str[i] != '\0')
{
_putchar(str[--i]);
}

return (x);
}
