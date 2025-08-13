//7. Reverse number : 47856 = 65874
#include<stdio.h>
int main()
{
    int num,r,rev=0;
    printf("Enter any number :");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        num=num/10;
        rev=rev*10+r;    
    }
    printf("Reverse number = %d",rev);
}