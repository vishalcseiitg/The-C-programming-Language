/*modify the temperature conversion program to print the table in the
reverse order , that is , from 300 degrees to 0. */

#include <stdio.h>

int main(){
    float fahr , celsius;
    int lower = 0;
    for(float fahr = 300 ; fahr>=lower ; fahr = fahr-20){
        celsius = (5.0/9) * (fahr-32);
        printf("%3.0f\t%6.1f\n" , fahr , celsius);
    }
}

/* It is bad to bury magic numbers like 300 , or 20 in a program.
they convey little information to someone who might have to read the program
later and they are hard to change in systematic way.

A #define line defines a symbolic name or symbolic constant to be a particular 
string of characters :

#define    name    replacemnet text;
*/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
    int fahr;
    for(fahr = LOWER ; fahr <= UPPER ; fahr = fahr + STEP);
        printf("%3d %6.1f\n" , fahr , (5.0/9.0) * (fahr-32));
}
