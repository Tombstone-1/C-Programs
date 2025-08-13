#include<stdio.h>

int main() {
	int i=1;
	
	while(i<=20){
		printf("%d",i);
		i++;		
	}
	
	printf("\t");
	
	i=1;
	do{
		printf("%d",i);
		i++;
	}while(i<=20);
	
	printf("\t");
		
	for(i=1;i<=20;i++) {
		printf("%d",i);
	}
}