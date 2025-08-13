// sum of digit

#include<stdio.h>
int main() {
	int n,m,sum=0;
	printf("Enter any number : ");
	scanf("%d", &n);
	
	while(n>0)
	{
		m = n%10;    // remainder
		sum = sum + m;
		n = n/10;  // digit division
		
	}
	printf("sum of digits : %d", sum);
}