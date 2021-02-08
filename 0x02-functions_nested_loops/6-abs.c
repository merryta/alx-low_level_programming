#include "holberton.h"
int _abs(int){

int const mask = n >> (sizeof(int) * CHARBIT - 1); 
    return ((n + mask) ^ mask); 
}

int main(void)
{
    int r;
    
      r = _abs(n);
      _putchar(r);
      _putchar('/n');
    return (0);
}
