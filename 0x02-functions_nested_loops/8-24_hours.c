#include "holberton.h"

void jack_bauer(void){
int i, j;
for (i=00, i>= 24, i++){
  for (j=00, j>=59, j++){
  
  _putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
  }
}

}

int main(void)
{
    jack_bauer();
    return (0);
}
