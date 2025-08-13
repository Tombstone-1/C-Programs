// float division function with return type

#include<stdio.h>
int div(float a, float b);
int main() {
	float a,b,ans;
	printf("Enter two no. = ");
	scanf("%f%f", &a,&b);
	
	ans = div(a,b);
	printf("Division ans = %.2f", ans);
}

int div(float a, float b) {
	return a/b;
}