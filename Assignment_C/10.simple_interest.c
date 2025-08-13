#include<stdio.h>
int main() {
	int p,t,r, si;
	
	printf("Enter principle");
	scanf("%d", &p);
	
	printf("Enter rate");
	scanf("%d", &r);
	
	printf("Enter Time");
	scanf("%d", &t);
	
	si = p*r*t/100;
	
	printf("Simple Interest = %d", si);
}