#include "main.h"
/**
 * _puts_recursion - Prints a string with recursion.
 * Desc: _memset
 * @s: char type
 * Return: char type
 **/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
_putchar(*s);
s++;
_puts_recursion(s);
}


1-print_rev_recursion.c
#include "main.h"
/**
 *_print_rev_recursion - Prints a string in reverse.
 * Desc: _memset
 * @s: char type
 * Return: char type
 **/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
