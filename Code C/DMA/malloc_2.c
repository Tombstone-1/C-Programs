#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n1,n2,i;
    printf("Enter the limit: ");            //10
    scanf("%d",&n1);
    ptr=(int*)malloc(n1*sizeof(int));    //ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("no memory");
        return 0;
    }
    printf("Enter the elements : ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&(ptr[i]));
    }
    printf("\n Elements : ");
    for(i=0;i<n1;i++)
    {
        printf("\t %d",ptr[i]);
    }
    
    printf("\n Enter new size: ");
    scanf("%d",&n2);
    ptr=realloc(ptr,n2);
    printf("\n Enter new elements: ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&(ptr[i]));
    }
    printf("\n New Elements : ");
    for(i=0;i<n2;i++)
    {
        printf("\t %d",ptr[i]);
    }    
    free(ptr);
}