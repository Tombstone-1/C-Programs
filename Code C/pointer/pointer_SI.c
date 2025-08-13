#include<stdio.h>
int main()
{
    int p,n,r,si;
    int *a,*b,*c,*d;
    a=&p;
    b=&n;
    c=&r;
    d=&si;
    printf("Enter amount,number of year,rate:");
    scanf("%d%d%d",a,b,c);
    *d= *a * *b * *c/100;
    printf("Simple Interest=%d",*d);
}