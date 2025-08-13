#include<stdio.h>
#include<string.h>

int main(){
    char str1[20], str2[20];
    char *p = &str1[0];
    char *ptr = &str2[0];

    puts("enter string 1 : ");
    gets(p);

    puts("enter string 2 : ");
    gets(ptr);

    int j = strlen(p);
    int l = j + strlen(ptr);

    for(int i=0; i<l; i++){
        *(p+j) = *(ptr+i);
        j++;
    }

    puts("concadenate string : ");
    puts(p);

}