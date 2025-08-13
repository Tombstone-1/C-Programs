#include<stdio.h>

int main(){
    int a=10;
    int *p=&a;
    int  **c = &p; // syntax of double pointer.

    **c=90;
    printf("%d", a);
}

