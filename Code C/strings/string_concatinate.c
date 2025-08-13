//strcat()
#include<stdio.h>
#include<string.h>
int main() {
    char s1[10],s2[10];    
	printf("Enter s1 :");    
	gets(s1);    
	printf("Enter s2 :");    
	gets(s2);    
	strcat(s1,s2);    
	puts(s1);
}