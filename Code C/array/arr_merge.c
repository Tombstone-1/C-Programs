#include<stdio.h>

int main(){
    int r,i, j, arr1[100], arr2[100], arr3[100];

    printf("enter range : ");
    scanf("%d",&r);

    printf("enter ele 1: \n");    
    for(int i=0; i<r; i++){
        scanf("%d",&arr1[i]);
    }

    printf("enter ele 2: \n");    
    for(int i=0; i<r; i++){
        scanf("%d",&arr2[i]);
    }

//merge here -  i globally declare for block.

    for(i=0; i<r; i++){
        arr3[i] = arr1[i];
    }
    for(j=0; j<r; j++){
        arr3[i] = arr2[j];
        i++;
    }
    
    for(int k=0; k<2*r; k++){
        printf("%d ", arr3[k]);
    }
}