// fibonaci series

#include<stdio.h>
int main() {
	int i, n, a=0,b=1,c=0;
	
	printf("Print fibbonaci series steps till :  ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n%d", c);
		a=b;
		b=c;
		c=a+b;
	}
}