#include<stdio.h>

int main()
{
    int x;
    printf("Enter a no. ");
    scanf("%d", &x);

    (x%2==0)?(printf("%d is Even", x)):((printf("%d is Odd",x)));
}
