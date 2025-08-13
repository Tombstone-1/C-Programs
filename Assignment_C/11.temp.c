#include<stdio.h>
int main() {
	float c, f;
	
	printf("Enter temperature (in F) = ");
	scanf("%f", &f);
	
	c = (f-32)/1.8;
	f = (c*1.8) + 32;
	
	printf("Celcius = %.2f", c);
	printf("\tfahrenheit = %.2f", f);
}