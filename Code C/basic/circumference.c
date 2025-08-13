// c program to calculate circumfernce of circle = 2*3.14*r

#include<stdio.h>

int main() {
	float r, ans;
	printf("enter radius :- ");
	scanf("%f", &r);
	
	ans = 2*3.14*r;
	
	printf("Circumference of circle = %.2f", ans);
	 
}