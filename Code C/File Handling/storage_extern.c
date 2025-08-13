#include<stdio.h>

// if you access it within the file it will give warning.
extern int i = 10; //  can be access globally in the file and also from outside of the file.

int main(){
    printf("%d", i);
}