// switch expression maximum no among two 

#include<stdio.h>
int main() {
	int a,b;
	printf("Enter two no.");
	scanf("%d%d",&a,&b);
	
	switch(a>b)
	{
		case 0 : printf("%d is max", b);
			break;
		case 1 : printf("%d is max",a);
			break;
		default : printf("error");
			break;
	}
}