// program to print asterisk pattern

#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,m,n;
  clrscr();
  printf("Asterisk Pattern: \n");
  printf("-------------------------\n\n");

  for(i=1; i<=5; i++)
   {
     for(j=1; j<=i; j++)
     {
       printf("*");
     }
     printf("\n");
   }
  for(m=5; m>=1; m--)
   {
     for(n=1; n<m; n++)
     {
       printf("*");
     }
      printf("\n");
   }

getch();
}