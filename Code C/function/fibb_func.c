// fibbonaci series with func

#include<stdio.h>
int a,b,c,i,n;
int main() {
	
	int fibb(int n);
	printf("run series till = ");
	scanf("%d", &n);
	fibb(n);
	
}

int fibb(int n) {
	a=0;
	b=1;
	printf("%d", a);
	for(i=1;i<=n;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf("\n%d", c);
	}
}