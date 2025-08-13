// calculate factorial using function

#include<stdio.h>
int main() {
	int n;
	int factorial(int n);
	printf("Enter a no. = ");
	scanf("%d",&n);
	
	printf("Factorial = %d", factorial(n));
	
}
int factorial(int n) {
	int fact = 1;
	while(n>0) {
		fact = fact * n;
		n--;
	}
	return fact;
}
