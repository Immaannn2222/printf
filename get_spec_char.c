#include "holberton.h"
/**
  *get_spec_char - checks the characters
  *@c: a charcter
  *@p: the list
  *Return: 1 or -1
  */

int get_spec_char(char c, va_list p)
{
spec_t spec[] = {
{'c', print_char},
{'s', print_string},
{'%', print_percent},
{'i', print_integer},
{'d', print_integer},
{'b', print_bin},
{'u', print_unsig_int},
{'o', print_oct},
{'r', rev_string},
{'0', NULL}
};

int i = 0;
int len = 0;
while (spec[i].x != '0')
{
if (spec[i].x == c)
{
len += spec[i].func(p);
return (len);
}
i++;
}
return (-1);
}

