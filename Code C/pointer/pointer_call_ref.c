#include<stdio.h>

void func(int *x, int *y){    // pointer call by reference.
    *x = 10;
    *y = 90;
}

int main(){
    int a = 90;
    int b = 10;

    func(&a, &b);

    printf("a : %d\t, b : %d\n", a, b);
}