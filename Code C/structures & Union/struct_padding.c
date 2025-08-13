// structure padding exmaple

#include<stdio.h>
#pragma pack(1) // this will reduce memory but increase cpu cycle.

struct abd{
    char a;
    int b;
    char c;
}var;

int main(){
    printf("%d", sizeof(var));
}