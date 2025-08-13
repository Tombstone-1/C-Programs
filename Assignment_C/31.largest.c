#include<stdio.h>

void size(int a, int b);

int main() {
	int a, b;
	printf("Enter two no. = ");
	scanf("%d%d",&a,&b);
	
	size(a,b);
}

void size(int a, int b) {
	if(a>b) {
		printf("\n%d is largest", a);
		printf("\n%d is smallest", b);
	}
	else{
		printf("\n%d is largest", b);
		printf("\n%d is smallest", a);
	}
}