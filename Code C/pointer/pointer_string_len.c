#include<stdio.h>
#include<string.h>

int main(){
    char str[10];
    char *p = &str[0];

    puts("enter string :");
    gets(p);

    // in case of string you dont need *p for only for printing and scaning. 
    int len=0;
    for(char *p=&str[0]; *p!='\0'; p++){
        len++;
    }

    /* alternate way */
    // for(int i=0; i<10; i++){
    //     if(*(p+i) != '\0'){
    //         len++;
    //     }
    // }

    printf("%s length : %d\n", p, len);

    
}

