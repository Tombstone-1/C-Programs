// 1 to 500 palindrome

#include<stdio.h>
int main()
{
    int num,r,rev=0,chck,i,j;
    for(i=1;i<=500;i++) 
    {
    	chck = i;
    	num = i;
    	for(j=1;j<=i;j++)
    	{
    		r=num%10;
        	num=num/10;
        	rev=rev*10+r;
		}
		if(chck==rev)
    	printf("%d", rev);
    	printf("\n");
		
	}
	
}