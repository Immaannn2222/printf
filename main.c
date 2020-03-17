#include <stdio.h>
#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
_printf("%%\n");
_printf("%");
_printf("%%r\n");
_printf("hello%%\n");
_printf("minehello%");
_printf("hello%r\n");
_printf("mineUnknown:[%r]\n");
_printf("mineCharacter:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
return (0);
}