/* Conditions
*  matrics should have equal no. of rows and column.
*  matrics should also posses equal element value for equal element positions.
*/

#include<stdio.h>

int main(){
    int r1,c1, r2,c2, c;
    int arr1[10][10], arr2[10][10];

    printf("enter row and col for matrix 1 : \n");
    scanf("%d%d", &r1, &c1);
    printf("enter element : \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("enter row and col for matrix 2 : \n");
    scanf("%d%d", &r2, &c2);
    printf("enter element : \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("matrix 1 : \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nmatrix 2 : \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("%d  ", arr2[i][j]);
        }
        printf("\n");
    }

    c=0;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            if(arr1[i][j] != arr2[i][j]){
                c++;
            }
        }
    }

    if(r1 == r2 && c1 == c2){
        if(c==0){
            printf("matrix is equal \n");
        }
        else{
            printf("matrix not equal (elements have different values) \n");
        }
        
    }
    else{
        printf("matrix not equal (rows and column are different) \n");
    }
}