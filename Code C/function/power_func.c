// to calculate power

#include<stdio.h>
int main() {
	int bs, ex;
	int power(int bs, int ex);
	
	printf("Enter base and ex = ");
	scanf("%d%d", &bs,&ex);
	
	printf("Ans = %d", power(bs,ex));
}

int power(int bs, int ex) {
	int p=1;
	while(ex>0) {
		p = p * bs;
		ex--;
	}
	return p;
}