#include<stdio.h>

int main() {
	int i,j;
	
	for(i=1; i<=10; i++)		//column
	{
		for(j=1;j<=15;j++)		//row
		{
			printf("\t%d",i*j);
		}
		printf("\n");
	}
	
}