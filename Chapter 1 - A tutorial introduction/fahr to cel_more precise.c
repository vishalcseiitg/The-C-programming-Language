#include <stdio.h>

//writing the same code with more precision introducing the concept of floating points

int main(){
    float fahr , celsius;
    int upper , lower , step;

    upper = 300;
    lower = 0;
    step = 20;

    fahr = lower;
    while(fahr<=upper){
        celsius = (5.0/9) * (fahr-32);
        printf("%3.0f\t%6.1f\n" , fahr , celsius);
        fahr = fahr + step;
    }
}

/*

%d = print as decimal integer
%6d = print as decimal integer , atleast 6 character wide
%f = print as floating point
%6f = print as floating point , atleast 6 characters wide
%.2f = print as floating point , 2 characters after decimal point
%6.2 = print as floating point , at least 6 wide and 2 after decimal point

%o for octal
%x for hexadecimal
%c for character
%s for string

*/
