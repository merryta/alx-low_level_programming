#include "holberton.h"

int _isalpha(int c);
int i = 1;
int j = 0;
if (c = 'a' && c = 'z' || c = 'A' && c = 'Z') {
    _putchar(i);
}else{
    _putchar(j);
 }
}
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
