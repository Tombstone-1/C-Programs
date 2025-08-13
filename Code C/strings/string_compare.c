//strcmp()    
#include<stdio.h>
#include<string.h>
int main() {
    char str1[10],str2[10];    
	printf("Enter first string: ");    
	gets(str1);    
	printf("Enter second string: ");    
	gets(str2);    
	
	if(strcmp(str1,str2)==0)    
	printf("Strings are equal");    
	else    
	printf("Strings are not equal");
}