// program even or odd

#include<stdio.h>
int main() {
	int n,*p;
	p=&n;
	
	printf("Enter a no.");
	scanf("%d",p);
	
	if (*p%2==0) {
		printf("%d is even",*p);
	}
	else{
		printf("%d is Odd",*p);
	}
}