#include <stdio.h>

int main(){

    int arr[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};

    printf("Row Sum: ");

    int count = 0;
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            count = count + arr[i][j];
        }

        printf("%d " , count);
        count = 0;
    
    }

    //column sum;

    printf("\nColumn sum ");

    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0 ; i < 3 ; i++){
            count = count + arr[i][j];
        }

        printf("%d " , count);
        count = 0;
    }
}
