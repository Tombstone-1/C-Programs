#include<stdio.h>

int main()
{
    int a=2, b=3;
    printf("value of a:%d , b:%d\n",a,b);

    printf("bit And :%d\n",a&b);
    printf("bit or :%d\n", a|b);
    printf("bit XOR : %d\n", a^b);
    printf("bit a not : %d\n", ~a);
    printf("bit a left shift : %d\n", a<<1);
    printf("bit a right shift : %d\n",a>>1);
}
