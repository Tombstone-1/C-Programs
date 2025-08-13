#include<stdio.h>

int main(){
    int a =10, b=20, c;
    int *x=&a;  // initialize
    int *y=&b;

    c = *x + *y;

    printf("addition of pointer : %d\n", c);    
}