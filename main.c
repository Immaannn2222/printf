#include "holberton.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - tests the _printf function
 *
 * Return: Always 0.
 */
int main(void)
{
int code;
int len;
int len2;
unsigned int ui;
void *addr;
printf("Numeric:\n");
printf("============\n");
printf("-------------------------------\n");
/* %i without param */
code = printf("Std: %i.\n");
printf("Std Returns: %d\n", code);
code = _printf("Our: %i.\n");
printf("Our Returns: %d\n", code);
printf("-------------------------------\n");
code = printf("Std: %i.\n", 0);
printf("Std Returns: %d\n", code);
code = _printf("Our: %i.\n", 0);
printf("Our Returns: %d\n", code);
printf("-------------------------------\n");
code = printf("Std: %i.\n", 67);
printf("Std Returns: %d\n", code);
code = _printf("Our: %i.\n", 67);
printf("Our Returns: %d\n", code);
printf("-------------------------------\n");
code = printf("Std: %i.\n", 127);
printf("Std Returns: %d\n", code);
code = _printf("Our: %i.\n", 127);
printf("Our Returns: %d\n", code);
printf("-------------------------------\n");
code = printf("Std: %d.\n", 0 % 10);
printf("Std Returns: %d\n", code);
code = _printf("Our: %d.\n", 0 % 10);
printf("Our Returns: %d\n", code);
printf("-------------------------------\n");
printf("\nCharacters:\n");
printf("============\n");
printf("-------------------------------\n");
code = printf("Std: %%.\n");
printf("Std Returns: %d\n", code);
code = _printf("Our: %%.\n");
printf("Our Returns: %d\n", code);
printf("-------------------------------\n");
code = printf("Std: Cu%cio.us\n", '7');
printf("Std Returns: %d\n", code);
code = _printf("Our: Cu%cio.us\n", '7');
printf("Our Returns: %d\n", code);
printf("-------------------------------\n");
printf("-------------------------------\n");
printf("-------------------------------\n");
printf("-------------------------------\n");
printf("-------------------------------\n");
len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("-------------------------------\n");
    ui = (unsigned int)INT_MAX + 1024;
    printf("-------------------------------\n");
    addr = (void *)0x7ffe637541f0;
    printf("-------------------------------\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    printf("-------------------------------\n");
    int x = _printf("Negative:[%d]\n", -762534);
    int y = printf("Negative:[%d]\n", -762534);
	_printf("the return of negative num : %i\n", x);

	printf("the return of negative num : %i\n", y);

    printf("-------------------------------\n");
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    printf("-------------------------------\n");
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    printf("-------------------------------\n");
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
   printf("-------------------------------\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    printf("-------------------------------\n");
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    printf("-------------------------------\n");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    printf("-------------------------------\n");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("-------------------------------\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    printf("-------------------------------\n");
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    printf("-------------------------------\n");
    return (0);
}
