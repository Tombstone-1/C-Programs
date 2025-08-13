//strlen()
#include<stdio.h>
#include<string.h>
int main() {
    char str[20];    
	int l;    
	printf("Enter the string: ");    
	gets(str);    
	l=strlen(str);    
	printf("length of the string = %d",l);
}