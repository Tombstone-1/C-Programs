#include<stdio.h>
void matrix_sub(int, int, int[][10], int[][10]);     // for declaration mentioning a column size is mandatory. or it will throw error for not defining the array.
void matrix_add(int, int, int[][10], int[][10]);

int main(){
    int row, col;
    int arr1[10][10], arr2[10][10];

    printf("enter row and col range : \n");
    scanf("%d%d",&row,&col);

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

    matrix_add(row, col, arr1, arr2);
    matrix_sub(row, col, arr1, arr2);
}

void matrix_add(int row, int col, int arr1[][10], int arr2[][10]){
    printf("matrix addition result : \n");
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d  ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

}

void matrix_sub(int row, int col, int arr1[][10], int arr2[][10]){
    printf("matrix substraction result : \n");

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d  ",arr1[i][j] - arr2[i][j]);
        }
        printf("\n");
    }
}