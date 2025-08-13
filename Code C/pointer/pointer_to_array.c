//array of pointer
#include <stdio.h>
int main (){
    int arr[3] = {10, 100, 200};    
	int i, *ptr[3];    
	for ( i = 0; i < 3; i++)    
	{
	    ptr[i] = &arr[i]; /* assign the address of integer. */    
	}    
	for ( i = 0; i < 3; i++)    
	{ 
		printf("Value of var[%d] = %d\n", i, *ptr[i] );    
	}
}