#include "holberton.h"
#include <unistd.h>

/**
 * _buffer - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _buffer(char c)
{
int size;
size = '1024';
return (write(1, &c, size));
}
