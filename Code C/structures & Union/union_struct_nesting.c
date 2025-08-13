#include<stdio.h>

struct stu{

    union abc{
        char a;
        char b;
        int c;
    }var2;
    union def{
        int d;
        int e;
        int f;
    }var3;
}var1;

int main(){
    int a = var1.var2.a; // for accesing a from union 1.
}