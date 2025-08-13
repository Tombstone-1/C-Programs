//maximum of three no. using ternary operator
// even odd user input
// leap year
//swap without third.
// alphabet. either constant or vowels.

#include<stdio.h>

int main()
{
    int a,b,c,x;
    printf("Enter 3 No. : ");
    scanf("%d%d%d", &a,&b,&c);

    x = a>b? (a>c? a:c):(b>c? b:c);
    printf("%d is maximum", x);
}
