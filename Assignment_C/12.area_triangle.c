#include<stdio.h>

int main() {
	float tri, b, h;
	
	printf("enter width= ");
	scanf("%f", &b, &h);
	
	printf("enter Height= ");
	scanf("%f",&h);
	
	tri = (0.5*b)*h;
	
	printf("Area of triangle = %.2f", tri);
	
}