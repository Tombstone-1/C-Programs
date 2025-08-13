#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=5, sum=0;
    int *ptr;

    ptr = (int *)calloc(5, sizeof(int));

    printf("enter element : ");
    for(int i=0; i<5; i++){
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<5; i++){
        sum = sum + ptr[i];
    }
    
    free(ptr);

    printf("sum of array : %d\n", sum);
}