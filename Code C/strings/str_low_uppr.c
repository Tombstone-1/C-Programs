#include<stdio.h>
#include<string.h>

int main(){
    int l, temp=0;
    char str[20];

    puts("enter a string");
    gets(str);
    puts(str);

    l=strlen(str);

    for(int i=0; i<l; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            //temp = str[i];
            str[i] = str[i]-32;         //ascii value difference 32
        }
    }

    puts(str);
    
}