#include<stdio.h>

int main() {
	int num;
	printf("Enter a number ");
	scanf("%d", &num);
	
	if (num != -1){
		
		int count = 0;
		while(num>0){
			num = num/10;
			++count;
		}
	printf("count = %d",count);
	}
	
}