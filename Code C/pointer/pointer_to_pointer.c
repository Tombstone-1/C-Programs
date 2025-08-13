//pointer to pointer
#include<stdio.h>
int main(){
    int num=20, *p, **ptr;    
	p=&num;    
	ptr=&p;    
	printf("\n Value of num = %d",num);    
	printf("\n Address of num = %d",p);    
	printf("\n Value of *p = %d",*p);    
	printf("\n Address of p = %d",ptr); 
	printf("\n value of *ptr = %d",*ptr);   
	printf("\n value of **ptr = %d",**ptr);
}