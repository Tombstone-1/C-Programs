#include<stdio.h>
int main() {
	int b,p,a=1,*base,*pow,*ans;
	base=&b;
	pow=&p;
	ans=&a;
	
	printf("Enter base and power ");
	scanf("%d%d",base, pow);
	
	while(*pow>0){
		*ans = *ans * *base;
		(*pow)--;
	}
	printf("Power = %d",*ans);
}
