/*  sum of main diagonal not off diagonal
*   Conditions
*   matrix row and column should be equal (m x n).
*   there are 2 diagonal primary and secondary.
*   for odd no. primary have middle no. that should not be repeated in secondary.
*/

#include<stdio.h>

int main(){
    int row, col, sum=0;
    int arr[10][10];

    printf("enter row and col : \n");
    scanf("%d%d", &row, &col);

    printf("enter matrix element : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("matrix 1 : \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    if(row==col){
        for(int i=0; i<row; i++){
            sum = sum + arr[i][i];
        }
        printf("sum of main diagonal of matrix : %d\n%d", sum, off);
    }
    else{
        printf("row and column of given matrix are not equal \n");
    }
}