// c program to find maximum no. among 2 using function

#include<stdio.h>

int main() {
	int n1,n2;
	int mx(int n1, int n2);
	printf("Enter two value = ");
	scanf("%d%d", &n1,&n2);
	
	if (mx(n1,n2)) {
		printf("\n num 1 is max");
	}
	else {
		printf("\n num2 is max");
	}
}

int mx(int n1, int n2) {
	/*if (n1 > n2) {
		return 1;
	}
	else {
		return 0;
	}*/
	return (n1>n2)? 1 : 0;
}