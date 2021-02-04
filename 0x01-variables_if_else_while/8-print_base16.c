
#include <stdio.h> 
  
int main() 
{ 
  
    // Get the character to be written 
    char ch;
  
    // Write the Character to stdout 
    for (ch = '0'; ch <='9'; ch++) 
        putchar(ch); 
  
  for (ch = 'a'; ch <='f'; ch++) 
        putchar(ch); 
     
  putchar('\n');
    
  return (0); 
} 
