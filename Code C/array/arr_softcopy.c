#include<stdio.h>

int main(){
    int r;
    printf("enter a range : ");
    scanf("%d",&r);

    int arr1[r],arr2[r];

    for(int i=0; i<r; i++){
        printf("enter ele for arr 1 : ");
        scanf("%d",&arr1[i]);
    }

    for(int i=0; i<r; i++){
        for(int j=i; j<=i; j++){
            arr2[i] = arr1[j];
        }
    }

    for(int i=0; i<r; i++){
        printf("arr2 ele %d : %d\n",i,arr2[i]);
    }
}