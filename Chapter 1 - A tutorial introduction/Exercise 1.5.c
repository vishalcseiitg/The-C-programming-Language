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
