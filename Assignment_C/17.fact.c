#include<stdio.h>

int main() {
	int fact=1,i, x;
	printf("Enter a no = ");
	scanf("%d",&x);
	
	for(i=x;i>0;i--) {
		fact = fact * i;
	}
	
	printf("%d", fact);
}