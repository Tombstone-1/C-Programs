/*  fixed   */

#include<stdio.h>
#include<string.h>

int main(){
    int l;
    char str1[50];
    char str2[50];

    puts("enter str 1");
    gets(str1);

    // strcpy(str2, str1);
    // puts(str2 );

    l = strlen(str1);
    for(int i=0; i<l; i++){
        str2[i] = str1[i];
    }

    puts("string 2 : ");
    puts(str2);


}