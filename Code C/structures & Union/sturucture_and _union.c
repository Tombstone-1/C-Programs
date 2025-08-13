//difference structure and union // union takes less size
#include<stdio.h>
struct sdemo
{
    int num1;
    char name[20];
    float num2;
}s1;

union udemo
{
    int num1;
    char name[20];
    float num2;
}u1;

int main()
{
    printf("\n Size of structure : %d",sizeof(s1));
    printf("\n Size of union : %d",sizeof(u1));
}