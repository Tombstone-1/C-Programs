// multiplication table


#include<stdio.h>
int main() {
	int i,n,t;
	printf("Enter a no for table : ");
	scanf("%d",&n);
	
	for(i=1;i<=10; i++)
	{
		t = n*i;
		printf("\n%d x %d = %d",n,i,t);
	}
}