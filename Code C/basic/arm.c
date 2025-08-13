//To check given no is Armstrong or not. 153= 1*1*1 + 5*5*5 + 3*3*3 = 153
#include<stdio.h>
int main()
{
    int num,r,a=0,temp;
    printf("Enter any number :");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=num%10;		// this one seperating digit.
        a=a+r*r*r;
        num=num/10;		// this one taking out last digit.
        
        
    }
    if(temp==a)
    printf("armstrong number");
    else
    printf("Not armstrong number");
}