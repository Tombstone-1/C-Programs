#include<stdio.h>

int main()
{
    int a=3, b=5, c;
    printf("Value of a : %d, b : %d\n",a,b);
    c = a==b;
    printf("compare a, b : %d\n",c);
    c = a!=b;
    printf("Not equal a, b : %d\n",c);
    c = a>b;
    printf("greater a, b : %d\n",c);
    c = a<b;
    printf("less a, b : %d\n",c);
    c = a>=b;
    printf("greater equal a, b : %d\n",c);
    c = a<=b;
    printf("less equal a, b : %d\n",c);
}
