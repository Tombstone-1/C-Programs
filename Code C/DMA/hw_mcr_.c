#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr;

    printf("enter blocks no. :  ");
    scanf("%d", &n);

    // give random address after printing
    ptr = (int *)malloc(n*sizeof(int));

    if(ptr == NULL){
        printf("memory allocation failed\n");
    }

    //after calloc initialization. all value become zero.
    ptr = (int *)calloc(n, sizeof(int));

    int nw;
    printf("enter block size include previous one : ");
    scanf("%d", &nw);

    // realloc to resize.
    ptr =(int *)realloc(ptr, nw*sizeof(int)); // previous pointer and nw size .

    
    for(int i=0; i<nw; i++){
        printf("%d\n", ptr[i]);
    }
    
    free(ptr);
}