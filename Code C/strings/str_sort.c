#include<stdio.h>
#include<string.h>

int main(){
    int l, temp;
    char str[20];

    puts("enter a string");
    gets(str);
    puts(str);
   

    l=strlen(str);

    for(int i=0; i<l; i++){
        for(int j=i+1; j<l; j++){
            if(str[i] > str[j]){
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            }
        }
    }

    puts(str);
    //printf("%s", str);
    
}