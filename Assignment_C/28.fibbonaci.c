#include<stdio.h>

int main() {
	int a,b,temp,n,i;
	
	printf("Enter a no till series run = ");
	scanf("%d",&n);
	
	a=0;
	b=1;
	printf("%d\t%d",a,b);
	
	for(i=1;i<=n;i++){
		printf("\t%d",a+b);
		temp = a+b;
		a=b;
		b=temp;
	}
	
}