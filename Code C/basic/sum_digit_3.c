//6.Sum of digit : 745896 = 7+4+5+8+9+6
#include<stdio.h>
int main()
{
    int num,sum=0,r;
    printf("Enter any number: ");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        num=num/10;
        sum=sum+r;
    }
    printf("\n Sum of digit = %d",sum);    
} 