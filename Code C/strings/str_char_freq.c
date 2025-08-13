#include<stdio.h>
#include<string.h>

void freq_char(char []);

int main(){
    char str[20];

    puts("enter a string : ");
    gets(str);
    
    freq_char(str);

}

void freq_char(char str[]){

    char charset[256] = {0};
    int c=0, l=strlen(str);

    for(int i=0; i<l; i++){
        charset[str[i]]++;
    }
    
    for(int i=0; i<l; i++){
        if(str[i] != str[i+1]){
            printf(" %c  :  %d times\n", str[i], charset[str[i]]);
        }    
    }
}