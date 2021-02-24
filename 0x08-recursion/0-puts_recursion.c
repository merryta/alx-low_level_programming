#include "holberton.h"
/**
 * _puts_recursion - function print a string
 * @s: string to print
 * Return: no zero
 */
void _puts_recusion(char *s)
{
  int i = 0;

  if (s[i] == '\0')
    {
      _putchar(10);
      return;
}
  _putchar (*s);
  s++;
  _puts_recursion(s);
}
