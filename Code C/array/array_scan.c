// user define value in an array

#include<stdio.h>

int main() {
	int i;
	char letter[10];
	printf("Enter array elements = ");
	
	for(i=0;i<10;i++){
		scanf("%c", &letter[i]);
	}
	printf("\n character array : ");
	for(i=0;i<10;i++){
		printf("%c\t", letter[i]);
	}
}