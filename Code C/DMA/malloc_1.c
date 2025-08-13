 #include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("Enter the limit: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));            //malloc() - homogenous / can be use as array but has complecation.
    if(ptr==NULL)
    {
        printf("no memory");
        return 0;
    }
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&(ptr[i]));
    }
    printf("\n Elements : ");
    for(i=0;i<n;i++)
    {
        printf("\t %d",ptr[i]);
    }
    //free();
}