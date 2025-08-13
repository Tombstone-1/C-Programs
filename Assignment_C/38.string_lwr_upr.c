#include<stdio.h>
#include<string.h>

int main() {
	char str[10];
	printf("Enter a string = ");
	
	gets(str);
	strlwr(str);
	puts(str);

}