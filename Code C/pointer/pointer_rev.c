#include<stdio.h>

int main(){
    int arr1[5];    
    int *p1 = &arr1[0];

    printf("enter element of 1st array : \n");
    for(int i=0; i<5; i++){
        scanf("%d", p1+i);
    }

    printf("print element of 2nd array : \n");
    for(int i=5-1; i>=0; i--){
        printf("%d\t", *(p1+i));   // + does not means increment it means concadination.
    }

}