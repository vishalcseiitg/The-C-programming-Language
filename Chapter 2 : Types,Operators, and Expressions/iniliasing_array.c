#include <stdio.h>
#define N 5

int main(){
    int arr[N];

    printf("Enter elements of array: \n");
    for(int i = 0 ; i < N ; i++){
        scanf("%d" , &arr[i]);
    }

    printf("\nThe Output: \n");

    for(int i = 0 ; i < N ; i++){
        printf("%d" , arr[i]);
    }
}
