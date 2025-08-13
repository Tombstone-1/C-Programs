//menu driven program aoc, aot, aor

#include<stdio.h>
int main()
{
    int r,b,h,l,br,ans,ch;
    printf("\n1.Area of circle \n2.Area of triangle \n3.Area of rectangle\n");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("Enter the radius:");
                scanf("%d",&r);
                ans=3.14*r*r;
                printf("\n Area of circle=%d",ans);
                break;
                
        case 2: printf("Enter b and h:");
                scanf("%d%d",&b,&h);
                ans=0.5*b*h;
                printf("\n Area of traingle = %d",ans);
                break;
                
        case 3: printf("Enter l and br:");
                scanf("%d%d",&l,&br);
                ans=l*br;
                printf("\n Area of rectangle = %d",ans);
                break;
                
        default : printf("sahi sahi choice select kro !! majk nai");
        break;
    }
}