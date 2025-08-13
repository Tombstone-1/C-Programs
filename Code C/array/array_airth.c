//Arithmetic operations with one dimensional array.
#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    printf("Enter array1 elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter array2 elements :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\n Addition of two arrays :\t");
    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d\t",c[i]);
    }
    
    
    
}