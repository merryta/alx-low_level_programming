#include "holberton.h"

void print_alphabet(void){
int i , j =  1;

while ( j<10 )
{
  for ( i='a'; i <='z'; i++){
     putchar(i);
}

putchar('/n');
  j++;
}

