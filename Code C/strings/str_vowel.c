#include<stdio.h>
#include<string.h>

int main(){
    int l, v=0, c=0;
    char str[20];

    puts("enter a string");
    gets(str);
    puts(str);

    l=strlen(str);

    for(int i=0; i<l; i++){
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' 
        || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U'){
            v++;
        }
        else{
            c++;
        }
    }
    printf("vowel count = %d\n", v);
    printf("consonent count = %d\n", c);
}