//macro substitution directives
#include<stdio.h>
#define SIZE 10   // this is macro already define like in arduino.
int main(){
    int a[SIZE],i;    
	printf("Enter array elements : ");    
	for(i=0;i<SIZE;i++)    
	{        
		scanf("%d",&a[i]);    
	}    
	printf("Enter array elements : ");    
	for(i=0;i<SIZE;i++)    
	{        
		printf("\t%d",a[i]);    
	}    
}