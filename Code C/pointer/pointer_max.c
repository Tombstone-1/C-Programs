// program to print max

#include<stdio.h>
int main(){
	int a,b,c,*p,*q,*r;
	p=&a;
	q=&b;
	r=&c;
	
	printf("Enter numbers");
	scanf("%d%d%d",p,q,r);
	
	if (*p>*q){
		if(*p>*r){
			printf("%d is maximum", *p);
		}
		else{
			printf("%d is maximum",*r);
		}
	}
	else {
		if (*q>*r){
			printf("%d is maximum",*q);
		}
		else{
			printf("%d is maximum",*r);
		}
	}
}