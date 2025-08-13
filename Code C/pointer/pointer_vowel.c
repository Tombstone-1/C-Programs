// wap to check vowel or consonent with pointer

#include<stdio.h>
int main() {
	char ch;
	char *p;
	p=&ch;
	printf("Enter any character");
	scanf("%c",p);
	
	if(*p=='a' || *p=='i' || *p=='o' || *p=='e' || *p=='u' || *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U')
	{
		printf("Vowel");
	}
	else
	{
		printf("consonant");
	}
}