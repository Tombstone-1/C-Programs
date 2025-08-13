#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;

    ptr = (int *)calloc(3, sizeof(int));

    printf("%d\n", ptr);
    printf("\n\n");

    for(int i=0; i<3; i++){
        printf("%d\n", (ptr[i]));
    }

    free(ptr);
}