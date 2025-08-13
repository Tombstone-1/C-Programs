/*   fixed  */

#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    int count=0;
    puts("enter string :");
    gets(str);

    //strlen(str);

    for(int i=0; i<50; i++){
        if(str[i] == '\0'){
            break;
        }
        else{
            count++;
        }
    }

    puts(str);
    printf("%d\n", count);
}