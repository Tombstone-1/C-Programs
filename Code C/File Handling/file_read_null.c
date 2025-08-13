#include<stdio.h>

int main(){

    FILE *x;

    x = fopen("laptop.txt", "r");  // in read mode , when file does not exist it return a null pointer. and it does not create file.
    if(x == NULL){
        printf("problem in file handling");
    }

    fclose(x);
    getch();

}