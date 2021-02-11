#include "holberton.h"
/**
 * print 0 to 9 numbers with new line
 * return 0.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar (n + '0');
	}
		_putchar ('\n');
}
