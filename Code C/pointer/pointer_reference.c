//call by reference

#include<stdio.h>
int main() {
	int swap(int *n1,int *n2);
	    int num1,num2;    
		printf("Enter two numbers:");    
		scanf("%d%d",&num1,&num2); 
		   
		printf("\n\nBefore swapping the values are:\n\n");    
		printf("num1=%d and num2=%d",num1,num2);  
		  
		swap(&num1,&num2);                //n1,n2    
		
		printf("\n\nAfter swapping the values are:\n\n");
	    printf("num1=%d and num2=%d",num1,num2);
}
int swap(int *n1, int*n2) {   // reference of num1 and num2
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}