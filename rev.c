#include"holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
* rev_string - a function that reverses an array of strings
* @args: parameter desigining an array
* Return: lenn
*/
int rev_string(va_list args)
{
char *s;
int i = 0, j, lenn = 0;
s = va_arg(args, char*);
while (s[i] != '\0')
{
i++;
}
i = i - 1;
for (j = 0; j <= i; j++)
{
_putchar(s[i - j]);
lenn++;
}
return (lenn);
}
