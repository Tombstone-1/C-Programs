#include<stdio.h>
#include<string.h>

int main(){
    int l, count=0;
    char str[20], ch;

    puts("enter a string");
    gets(str);
    puts(str);
    printf("search character : ");
    scanf(" %c", &ch);

    l=strlen(str);

    for(int i=0; i<l; i++){
        if(str[i] == ch){
            count++;
        }
    }
    if(count!=0){
        printf("character found = %d times\n", count);
    }
    else{
        printf("character not found\n");
    }
    
}