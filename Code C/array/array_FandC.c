// traversing float and char array

#include<stdio.h>
int main() {
	int i;
	char arr[5] = {'a','b','c','d','e'};
	float arr1[5] = {1.5,8.92,0.43,67.0,50.0};
	
	for(i=0;i<5;i++) {
		printf("\t %.2f",arr1[i]);
	}
	printf("\n");
	
	for(i=0;i<5;i++) {
		printf("\t %c",arr[i]);
	}
}