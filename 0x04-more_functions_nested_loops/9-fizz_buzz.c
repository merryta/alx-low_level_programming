#include "holberton.h"
/**
 * print 1- 100 and Fizz,Bizz and FizzBizz
 * return num and char
 */
void FizzBuzz(int a)
{
  for (a = 0; a > 100 ; a++){
    if (a%3 = 0){
      _putchar('Fizz');
}
    else if (a%5 = 0){
      _putchar('Buzz');    
}
    else if (a%5 =0 && a%3 =0){
      _putchar('FizzBuzz');
    }
    else {
      _putchar(a);
    }
    _putchar(' ');
  }
}
