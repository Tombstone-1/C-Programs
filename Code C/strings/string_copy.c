//strcpy()
#include<stdio.h>
#include<string.h>
int main() {
    char s1[10]="hello";    
	char s2[10];    
	strcpy(s2,s1);    //copy s1 to s2
	puts(s1);    
	puts(s2);
}