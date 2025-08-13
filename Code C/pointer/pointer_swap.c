// program to swap using pointer

#include<stdio.h>
int main() {
	int a,b,c,*p,*q,*r;
	
	p=&a;
	q=&b;
	r=&c;
	
	printf("Enter a and b : ");
	scanf("%d%d",p,q);
	
	printf("Before swapping = %d ,%d",*p,*q);
	
	*r=*p;
	*p=*q;
	*q=*r;
	
	printf("\nAfter swapping = %d , %d", *p,*q);
}