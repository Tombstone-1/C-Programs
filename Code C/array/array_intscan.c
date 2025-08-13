// user define value in an array

#include<stdio.h>

int main() {
	int i,num[10];
	printf("Enter array elements = ");
	
	for(i=0;i<10;i++){
		scanf("%d", &num[i]);
	}
	printf("\n interger array : ");
	for(i=0;i<10;i++){
		printf("%d\t", num[i]);
	}
}