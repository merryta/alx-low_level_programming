#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n,unsigned int index);
unsiged int flip_bits(unsiged long int n, unsigned long int m);
#endif
