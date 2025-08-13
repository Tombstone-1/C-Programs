#include<stdio.h>

int *fun(){ // function is pointer type. as it is returning an address.
    int i=10;  // will get error when passing
    return &i;
}

int main(){
    int *m = fun(); // dangling pointer bcoz or dynamic pointer.
    printf("%d", *m);
} 