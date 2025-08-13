// continue

#include<stdio.h>
int main() {
	int i;
	for(i=1;i<=20;i++)
	{
		if(i==13)
		{
			continue;
		}
		printf("\t%d",i);
	}
}