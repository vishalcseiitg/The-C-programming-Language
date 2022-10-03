// FILE COPYING

#include <stdio.h>

/*copy input to output ; 1st version*/

int main(){
  int c;
  
  c = getchar();
  while(c !=EOF){
    putchar(c);
    c = getchar();
  }
}

/*write a program to print the value of EOF (Exrecise 1.7) */

#include <stdio.h>

int main(){
    printf("EOF: %d\n", EOF);
}

Output = -1
