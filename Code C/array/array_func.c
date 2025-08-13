//passing array to function
#include<stdio.h>
void sort(int []);
int main()
{
    int a[5]={5,4,7,2,1};
    sort(a);        
}
void sort(int a[])
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    printf("The sorted array is : ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a [i]);
    }
}