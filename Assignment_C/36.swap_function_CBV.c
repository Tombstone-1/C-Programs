/* Call By Value
In this the actual value of a and b in untouched as actual parameters are copied into formal parameters 
so they are not pointing toward same memory location.

The actual parameter is the argument which is used in the function call whereas formal parameter is the argument which is used in the function definition.

*/

#include <stdio.h>  
void swap(int , int); //prototype of the function   
int main()  
{  
    int a = 10;  
    int b = 20;   
    printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main  
    swap(a,b);  
    printf("After swapping values in main a = %d, b = %d\n",a,b); // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20  
}  
void swap (int a, int b)  
{  
    int temp;   
    temp = a;  
    a=b;  
    b=temp;  
    printf("After swapping values in function a = %d, b = %d\n",a,b); // Formal parameters, a = 20, b = 10   
}  