// factorial

#include<stdio.h>

int main() {
	int n, fact=1;
	
	printf("Enter a no. ");
	scanf("%d", &n);
	while(n>0)
	{
		fact = fact*n;
		n--;
	}
	
	printf("%d is factorial", fact);
}