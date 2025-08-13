#include<stdio.h>

int main(){
    int arr1[5];
    int arr2[5];
    int *p1 = &arr1[0];
    int *p2 = &arr2[0];

    printf("enter element of 1st array : \n");
    for(int i=0; i<5; i++){
        scanf("%d", p1+i);

        *(p2+i) = *(p1+i); 
    }

    printf("print element of 2nd array : \n");
    for(int i=0; i<5; i++){
        printf("%d\t", *(p2+i));
    }

}