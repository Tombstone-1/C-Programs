// strlwr()
#include<stdio.h>
#include<string.h>
int main(){
    char str[10];    
	printf("Enter the String in upperCase:");    
	gets(str);    
	strlwr(str);    
	puts(str);
}