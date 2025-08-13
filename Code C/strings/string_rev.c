//strrev()
#include<stdio.h>
#include<string.h>
int main(){
    char str[10];    
	printf("Enter string : ");    
	gets(str);    
	strrev(str);    
	puts(str);
}