//program to print array elements in reverse order. 
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter array elements : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Original array elements : ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n Reverse array elements : ");
    for(i=9;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}