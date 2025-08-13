/*  fixed   */

#include<stdio.h>
#include<string.h>

int main(){
    int temp = 0;
    char str[50];
    puts("enter a string : ");
    gets(str);

    //strrev(str);

    int l = strlen(str);
    for(int i=0; i<l/2; i++){
        temp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = temp;
    }
    
    puts(str);
}