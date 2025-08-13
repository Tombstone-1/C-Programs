//program to sort array elements in ascending order.(smallest to largest)
#include<stdio.h>
int main()
{
    int a[10],i,temp,j;                    // 8 5 2 3 6 7 8 9 10 1
    printf("Enter array elements : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n Sorted array : ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
}