#include <stdio.h>
#define MAX 50

int main(){

    int matrix_a[MAX][MAX];
    int matrix_b[MAX][MAX];
    int product[MAX][MAX];

    int arows , acolumns;
    int brows , bcolumns;
    int sum = 0;

    printf("Enter rows and columns in Matrix A: \n");
    scanf("%d %d" , &arows , &acolumns);

    printf("The elements of matrix A are: \n");

    for(int i = 0 ; i <arows ; i++){
        for(int j = 0 ; j < acolumns ; j++){
            scanf("%d" , &matrix_a[i][j]);
        }
    }

    printf("Enter rows and columns in matrix B: \n");
    scanf("%d %d" , &brows , &bcolumns);

    printf("The elements of matrix B are: \n");

    for(int i = 0 ; i < brows ; i++){
        for(int j = 0 ; j < bcolumns ; j++){
            scanf("%d" , &matrix_b[i][j]);
        }
    }

    if(arows!=bcolumns){
        printf("Matrix multiplication is not possible");
    }
    else{
        for(int i = 0 ; i <arows ; i++){
            for(int j = 0 ; j <bcolumns ; j++){
                for(int k = 0 ; k <brows ; k++){
                    sum = sum + matrix_a[i][k] * matrix_b[k][j];
                }
                product[i][j] = sum;
                sum = 0;
            }
        }
    }

    printf("The required matrix is:\n");
    for(int i = 0 ; i <arows ; i++){
        for(int j = 0 ; j < bcolumns ; j++){
            printf("%d " , product[i][j]);
        }
        printf("\n");
    }
}
