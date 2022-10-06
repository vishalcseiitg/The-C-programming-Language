#include <stdio.h>

int main(){

    int n;

    printf("Enter total numbers you want to reverse: ");
    scanf("%d" , &n);

    int a[n];

    printf("Print alll the %d elements: \n" , n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }

    printf("Reversed array: ");
    for(int i = n-1 ; i >=0 ; i--){
        printf("%d " , a[i]);
    }
}
