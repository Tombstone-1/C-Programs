// program to print No. pattern

#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,k;
 clrscr();
 printf("Numbers pattern :\n");

 k=1;
  for(i=1; i<=3; i++)
   {
    for(j=1; j<=3; j++)
     {
       printf("%d", k);
       k++;
     }
     printf("\n");
   }
 getch();
}
