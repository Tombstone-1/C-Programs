/*Transpose of matrix
1 2 3 
4 5 6
7 8 9
1 4 7
2 5 8
3 6 9  
transpose means row become column and vice versa      */
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter array elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Original Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Transpose of Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[j][i]);
        }
        printf("\n");
    }
}