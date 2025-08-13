#include<stdio.h>

int main() {
	int x;
	printf("Enter a no = ");
	scanf("%d",&x);
	
	if(x%2==0) {
		printf("number is even");
	}
	else{
		printf("number is odd");
	}
}