#include<stdio.h>

int main(){
    char c1,c2,c3,c4,v1,v2,v3,v4;
    printf("create a password : ");
    c1=getch();
    printf("*");
    c2=getch();
    printf("*");
    c3=getch();
    printf("*");
    c4=getch();
    printf("*");

    printf("\nEnter password : ");
    v1=getch();
    printf("*");
    v2=getch();
    printf("*");
    v3=getch();
    printf("*");
    v4=getch();
    printf("*");

    if(c1==v1 && c2==v2 && c3==v3 && c4==v4){
        printf("\nLogin");
    }
    else{
        printf("\nIncorrect password");
    }
}