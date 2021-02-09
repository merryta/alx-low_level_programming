#include "holberton.h"

int print_sign(int n) {


if (n > 0){
    _putchar('+')
    return (1);
} else if (n < 0)
   _putchar('-')
    return (-1);
}else{
  _putchar('0')
    return (0);
}
return (0);
)

int main(void)
{
    int r;

    r = print_sign(n);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
