//8. Palindrome number: 12321 = 12321
#include<stdio.h>
int main()
{
    int num,r,rev=0,temp;
    printf("Enter any number :");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=num%10;
        num=num/10;
        rev=rev*10+r;    
    }
    if(temp==rev)
    printf("Number is Palindrome.");
    else
    printf("Number is not Palindrome.");
}