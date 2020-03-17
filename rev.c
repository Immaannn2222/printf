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
int i = 0, lenn = 0;
s = va_arg(args, char*);
if (s == NULL)
{
return (-1);
}
while (s[i] != '\0')
{
i++;
}
i--;
for (; i >= 0; i++)
{
_putchar(s[i]);
lenn++;
}
return (lenn);
}
