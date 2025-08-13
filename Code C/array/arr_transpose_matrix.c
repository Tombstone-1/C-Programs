#include<stdio.h>

int main(){
    int row, col, r2, c2;
    int arr[10][10], arr_T[10][10];

    printf("enter row and col for matrix : \n");
    scanf("%d%d", &row, &col);

    printf("enter element : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Given Matrix : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

/*** transpose matrix condition ***/
    r2 = col;
    c2 = row;

    printf("Matrix Transpose : \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }


}