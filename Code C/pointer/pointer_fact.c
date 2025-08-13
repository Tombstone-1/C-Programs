// program factorial pointer

#include<stdio.h>
int main(){
	int fact=1,n,*p,*q; 
	p=&n;
	q=&fact;
	
	printf("Enter a No.");
	scanf("%d",p);
	
	while (*p>0){
		*q = *q * *p;
		(*p)--;
	} 
	printf("Factorial = %d", *q);
}