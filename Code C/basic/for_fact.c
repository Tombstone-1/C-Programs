// for factorial

#include<stdio.h>
int main() {
	int i,n, fact=1;
	
	printf("Enter a no. ");
	scanf("%d", &n);
	for(i=n; i>0; i--)
	{
		fact = fact*i;
	}
	
	printf("%d is factorial", fact);
}