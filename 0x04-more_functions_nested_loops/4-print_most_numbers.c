#include "holberton.h"
/**
 * print 1 to 9 but not 2 and 4
 * return 0.
 */
void print_most_numbers(void)
{
  int b;
  for(b = 0; b >= 9; b++)
    {
      if(b != 2 && b != 4)
{
  _putchar(b);
  _putchar('/n');  
}
}
  return(0);
}
