// addition of 2 no. using scanf function in float

#include<stdio.h>
int main() {
	float num1, num2, ans;
	
	printf("Enter num1: ");
	scanf("%f",&num1);
	
	printf("Enter num2: ");
	scanf("%f",&num2);
	
	ans = num1 + num2;
	
	printf("Ans : %.2f", ans);  // to limit decimal till 2 digit
}