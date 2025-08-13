#include<stdio.h>

int main() {
   int x, y, hcf, lcm;

   printf("Enter 2 no : ");
   scanf("%d%d",&x,&y);

   for(int i = 1; i <= x || i <= y; i++) {
        if( x%i == 0 && y%i == 0 )
            hcf = i;
        }

    lcm = x*y/hcf;

   printf("HCF : %d\n", hcf);
   printf("LCM : %d\n", lcm);
}
