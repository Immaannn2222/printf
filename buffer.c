#include "holberton.h"
#include <unistd.h>
#define BUFFER_SIZE 1024
/**
*_buffer - fill n bytes with character
*@b : parameter designing a character
*@s: pointer
*@n : a long integer
*Return:s
*/
char *_buffer(char *s, char b, unsigned int n)
{
unsigned int i;
n = BUFFER_SIZE;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}

