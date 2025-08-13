//Program to calculate sum of array elements.
#include<stdio.h>
int main()
{
    int a[20],i,sum=0,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Sum of array elements: ");
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}