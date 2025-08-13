// strupr
#include<stdio.h>
#include<string.h>
int main(){
    char str[10];    
	printf("Enter the String in lowerCase:");    
	gets(str);    
	strupr(str);    
	puts(str);
}