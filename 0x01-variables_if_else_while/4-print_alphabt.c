#include <stdio.h>

int main () {
   char ch ='a';
   
   for(ch = 'a' ; ch <= 'z' ; ch++) {
      if (ch != 'e' && ch != 'q')
      putchar(ch);
   }
   putchar ('\n');
   return(0);
}
