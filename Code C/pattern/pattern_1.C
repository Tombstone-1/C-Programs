// program to print pattern

#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,k;
  clrscr();
  printf("Asterisk Pattern \n");
  printf("----------------------\n\n");

  for(i=1; i<=4; i++)
   {
     for(j=1;j<=i;j++)
      {
	printf(" *");
      }
     printf("\n");
   }
  for(k=1; k<=(j-2); k++)
   {
     printf(" *");
   }
 getch();
}