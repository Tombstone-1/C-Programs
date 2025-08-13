#include<stdio.h>

int main() {
	int n;
	int multi_table(int n);
	
	printf("Enter a number for its table = ");
	scanf("%d", &n);
	
	multi_table(n);
}

int multi_table(int n) {
	int i, ans=0;
	
	for(i=1;i<=10;i++) {
		ans = n*i;
		printf("\n %d x %d = %d ",n,i,ans);
	}
}