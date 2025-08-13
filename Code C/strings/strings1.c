#include<stdio.h>
#include<string.h>

int main(){
    char str[10] = {'d','e','l','l','\0'};
    //gets(str);

    int a = strlen(str);
    printf("%d", a);
}