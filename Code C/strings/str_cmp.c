/*  fixed   */

#include<stdio.h>
#include<string.h>

int main(){
    char str1[50];
    char str2[50];
    int l1, l2, is_same=0;

    puts("enter string 1");
    gets(str1);
    puts("enter string 2");
    gets(str2);

    l1 = strlen(str1);
    l2 = strlen(str2);

    if(l1 == l2){
        for(int i=0; i<l1; i++){
            if(str1[i] != str2[i]){
                is_same++;
            }
        }
    }
    else{
        is_same++;
    }

    if (is_same == 0){
        puts("string is same");
    }
    else{
        puts("string not same");
    }
}

//palindrone or not string.