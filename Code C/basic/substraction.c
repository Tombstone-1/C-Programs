// substraction of two no. with scan f

#include<stdio.h>
int main() {
	int num1, num2, ans;
	
	printf("Enter num1: "); 
	scanf("%d",&num1);
	
	printf("Enter num2: ");
	scanf("%d",&num2);
	
	ans = num1 - num2;
	
	printf("Ans : %d", ans);
}