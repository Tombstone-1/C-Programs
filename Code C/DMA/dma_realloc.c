#include<stdio.h>
#include<stdlib.h>

int main(){
    int nw, n;
    int *ptr;

    printf("enter initial size : ");
    scanf("%d", &n);

    ptr = (int*)malloc(n*sizeof(int));

    //printf("%d\n", sizeof(ptr));

    printf("enter %d elements : \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }

    printf("enter new size of array including previous one : ");
    scanf("%d", &nw);

    ptr = (int *)realloc(ptr, nw*sizeof(int));

    printf("enter %d elements : \n",nw-n);
    for(int i=n; i<nw; i++){
        scanf("%d", &ptr[i]);
    }

    printf("after reallocations : \n");
    for(int i=0; i<nw; i++){
        printf("%d ",ptr[i]);
    }

    free(ptr);
    
}
