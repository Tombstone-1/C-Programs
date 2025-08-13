//10.To check given number Prime number or not.
#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("Enter any number :");            //65
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;    
            break;    
        }
    }
    if(flag==0)
    printf("Number is prime");
    else
    printf("number is not prime");
    
}