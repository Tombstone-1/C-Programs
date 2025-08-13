// Program to find maximum value from array elements
#include<stdio.h>
int main()
{
    int arr[10],i,max;        
    printf("Enter array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<10;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    printf("\n maximum value = %d",max);
}