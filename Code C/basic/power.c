// calculate power

#include<stdio.h>

int main() {
	int bs, ex, pow=1;
	
	printf("Enter base and ex value");
	scanf("%d%d", &bs,&ex);
	
	while(ex>0)
	{
		pow = pow * bs;
		ex--;
	}
	
	printf("%d is power", pow);
}