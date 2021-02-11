#include "holberton.h"
/**
 * print number 0 to 14 10 time
 * return 0.
 */
void more_numbers(void)
{
  int a,b;
  while (a <= 10){
    for (b = 0; b <=14; b++)
      {
	_putchar(b);
	_putchar('/n');
}
    a++;
}
  return(0);
}
