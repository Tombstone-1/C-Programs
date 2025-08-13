#include<stdio.h>
#include<string.h>

int main(){
    char str1[10], str2[10];
    char *p1 = &str1[0];
    char *p2 = &str2[0];

    puts("enter string 1 : ");
    gets(p1);

    // int l = strlen(p1);
    // for(int i=0; i<=l; i++){
    //     *(p2+i) = *(p1+i);
    // }
   
    int i=0;
    while(*(p+i)!='\0'){
        *(p2+i) = *(p1+i);
        i++;
    }

    puts("string 2  : ");
    puts(p2);

}