#include "holberton.h"

/**
*rev_string - prints a string in reverse
*@args: parameter
*Return: i
*/

int rev_string(va_list args)
{
char *s = va_arg(args, char*);
int i = 0, j = 0, x = 0;
char c;
while (s[i] != '\0')
i++;
if (i % 2 == 0)
x = (i / 2) - 1;
else
x = i / 2;
for (j = 0; j <= x; j++)
{
c = s[j];
s[j] = s[i - 1 - j];
s[i - 1 - j] = c;
}
return (i);
}
