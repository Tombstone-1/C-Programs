// program to Make pattern

#include<stdio.h>
#include<conio.h>

int patt(int);
int patt(int a)
{
  clrscr();
  printf("Enter the Rows No. \n");
  scanf("%d",&a);
  printf("--------------------\n\n");
 // a=a+1;
  return a;
}

void main()
{
  int n,i,j,res,count;
  count=res=patt(n);

  for(i=0; i<count; i++)
   {
   for(j=res; j>0; j--)
    {
      printf("%d", j);
    }
     printf("\n");
     res=res-1;
   }
  getch();
}