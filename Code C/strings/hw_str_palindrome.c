#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    int l;
    puts("enter a string");
    gets(str);

    l=strlen(str);

/******
    strrev(str);
    puts(str);
    if(strcmp(chk, str) == 0){
        puts("string is palindrome");
    }
    else{
        puts("string not palindrome");
    }

                                    *******/
    int temp, is_palin = 0;

    for(int i=0; i<l/2; i++){
        temp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = temp;

        if(str[i] != str[l-i-1]){
            is_palin++;
        }
    }

    puts(str);
    if(is_palin == 0){
        puts("string is palindrome");
    }
    else{
        puts("string not palindrome");
    }

}