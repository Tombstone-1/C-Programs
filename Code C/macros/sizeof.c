// size of operator
#include<stdio.h>

int main() {
	// datatype of c
	int i;
	long int l;
	float f;
	double d;
	long double ld;
	char ch;
	
	printf("\n size of integer = %d", sizeof(i));
	printf("\n size of long integer = %d", sizeof(l));  // format specifier
	printf("\n size of float = %d", sizeof(f));
	printf("\n size of double = %d", sizeof(d));
	printf("\n size of long double = %d", sizeof(ld));
	printf("\n size of char = %d", sizeof(ch));
}