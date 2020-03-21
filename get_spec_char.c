#include "holberton.h"
/**
  *get_spec_char - checks the characters
  *@format: a string refers to a control parameter used
  *Return: 1enth or -1
  */

int (*get_spec_char(const char *format))(va_list args)
{
spec_t spec[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"i", print_integer},
{"d", print_integer},
{"b", print_bin},
{"u", print_unsig_int},
{"o", print_oct},
{"R", rot13},
{NULL, NULL}
};

int i = 0;
while (spec[i].x != NULL)
{


if (*(spec[i].x) == *format)
{

return (spec[i].func);
}
i++;
}
return (spec[i].func);
}
