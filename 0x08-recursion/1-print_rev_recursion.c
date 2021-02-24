#include "holberton.h"
/**
 * _puts_recursion - prints a string
 * @s: string coming
 * Return: 0 when string is finished
 **/
void _print_rev_recursion(char *s)
{
int i = 0;

if (s[i] == '\0')
{
_putchar(10);
return;
}
_putchar (*s);
s--;
_print_rev_recursion(s);
}
