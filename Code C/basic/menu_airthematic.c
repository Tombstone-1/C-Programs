// menu driven for airthematic 

//menu driven program aoc, aot, aor

#include<stdio.h>
int main()
{
    int a,b,ans,ch;
    printf("\n1.Addition \n2.Substraction \n3.Multiplication \n4.Division");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
    printf("\n Enter the two no. :");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1: ans=a+b;
                printf("\n Sum of %d and %d = %d",a,b,ans);
                break;
                
        case 2: ans=a-b;
                printf("\n Substraction of %d and %d = %d",a,b,ans);
                break;
                
        case 3: ans=a*b;
                printf("\n Multiplication of %d and %d = %d",a,b,ans);
                break;
                
        case 4: ans=a/b;
                printf("\n Division of %d and %d = %d",a,b,ans);
                break;
                
        default : printf("sahi sahi choice select kro !! majk nai");
        break;
    }
}