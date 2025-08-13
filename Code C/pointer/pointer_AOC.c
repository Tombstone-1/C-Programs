// pointer to calculate area of circle

#include<stdio.h>
int main() {
	int r,a;
	int*p,*q;
	
	p=&r;
	q=&a;
	printf("Enter raidus");
	scanf("%d",p);
	*q=3.14**p**p;
	printf("\nArea of circle=%d",*q); 
}
