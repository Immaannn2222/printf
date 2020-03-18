#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <stddef.h>
/**
  *struct specifiers - struct to get spec char
  *@x: a charcter
  *@func: the function
  */
typedef struct specifiers
{
char *x;
int (*func)(va_list args);
} spec_t;

int (*get_spec_char(const char *format))(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list __attribute__((unused)) args);
int print_integer(va_list args);
int print_bin(va_list args);
int print_unsig_int(va_list args);
int print_oct(va_list args);
int rot13(va_list args);

int _putchar(char c);
int _printf(const char *format, ...);



#endif
