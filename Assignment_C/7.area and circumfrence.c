#include<stdio.h>

int main() {
	float area, cir, r;
	
	printf("Enter raidus of circle = ");
	scanf("%f", &r);
	
	area = 3.14*r*r;
	cir = 2*(3.14*r);
	
	printf("Area of circle = %.2f", cir);
}