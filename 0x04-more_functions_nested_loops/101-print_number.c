#include "holberton.h"
/**
* prints an integer
* return int.
*/
void print_number(int n)
{
if (n < 0)
{
 _putchar(0x2D);
  n=-n;
}
if (n > 9)
{
_putchar(n/10);
}
_putchar((n%10) + '0');
 return 0;
 }
