#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    int l, alp=0, spl=0, dig=0;
    puts("enter a string : ");
    gets(str);
    puts(str);

    l=strlen(str);
    //str[i] != '\0';

    for(int i=0; i<l; i++){
        if(str[i] != '\0'){
            if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            alp++;
            }
            else if(str[i]>='0' && str[i]<='9'){
                dig++;
            }
            else{
                spl++;
            }
        }
    }
    printf("no. of alphabets = %d\n", alp);
    printf("no. of special character = %d\n", spl);
    printf("no. of digits = %d\n", dig);
}