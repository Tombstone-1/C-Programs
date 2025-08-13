#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter 2 No. = ");
    scanf("%d%d",&x,&y);

    z = x>y? x:y;
    printf("%d is maximum\n", z);
}
