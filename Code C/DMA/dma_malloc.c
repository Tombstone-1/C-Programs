#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;

    printf("enter no. of block u want : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n*sizeof(int));

    printf("%d\n", ptr);
    printf("%d\n", (ptr+1));
    printf("%d\n", (ptr+2));
    printf("%d\n", (ptr+3));
    printf("%d\n", (ptr+4));
}