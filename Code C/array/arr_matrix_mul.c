#include<stdio.h>

void matrix_mul(int, int, int[][10], int[][10]);

int main(){
    int row, col;
    int arr1[10][10], arr2[10][10];

    printf("enter row and col range : \n");
    scanf("%d%d",&row,&col);

    while(row != col){
        printf("Row and col for matrix multiplication should be equal : \n");
        scanf("%d%d",&row,&col);
    }

    printf("enter matrix 1 value : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("enter matrix 2 value : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    matrix_mul(row, col, arr1, arr2);

}

void matrix_mul(int row, int col, int arr1[][10], int arr2[][10]){
    
    int mul[10][10];
    
    printf("\nmatrix multiplication (dot product method) result : \n");

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            mul[i][j] = 0;
            
            for(int k=0; k<col; k++){
                mul[i][j] = mul[i][j] + (arr1[i][k] * arr2[k][j]);  // 1r 1c, 1r 2c, 2r 1c, 2r 2c, 
           }   
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}