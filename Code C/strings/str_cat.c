/*  fixed   */

#include<stdio.h>
#include<string.h>

int main(){
    char str1[50];
    char str2[50];

    puts("enter string 1");
    gets(str1);

    puts("enter string 2");
    gets(str2);

    // str cat will join string 2 with string 1.
    //strcat(str1,str2);

    int c=strlen(str1);
    int l1=c;
    int l2=strlen(str2);

    for(int i=0; i<l1+l2; i++){
        str1[c] = str2[i];
        c++;
    }

    puts(str1);     


}