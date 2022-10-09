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

// reversing the array

int main(){
    int arr[N];
    int n;
    printf("Enter total elements in the array");
    scanf("%d " , &n);
    
    printf("Enter elements of array");
    
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
        
        //reversed array as output
        
        for(int i = n-1 ; i <=0 ; i--){
            printf("%d" , arr[i]);
        }
    }
