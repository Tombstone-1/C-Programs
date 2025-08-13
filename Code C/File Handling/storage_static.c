#include<stdio.h>

int func();

int main(){
    // if not static will give error as undeclared.
    printf("%d", func());
}

int func(){
    
    static int i = 10;  // it has to initialize within the block but will stay in memory till termination.
    return i;
}