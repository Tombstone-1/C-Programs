//program with return type function 

#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

 int main() {
 	int a,b,ans;
 	int add(int a, int b);
 	
 	printf("Enter two no. = ");
 	scanf("%d%d",&a,&b);
 	
 	ans = add(a,b);
 	printf("\nadd = %d",ans);
 	
 	ans = sub(a,b);
 	printf("\nsubstraction = %d",ans);
 	
	ans = mul(a,b);
 	printf("\nMultiplication = %d",ans);
 	
	ans = div(a,b);
 	printf("\nDivision = %d",ans);
 }
 
 int add(int a, int b) {
 	return a+b;
 }
 
 int sub(int a, int b) {
 	return a-b;
 }
 
 int mul(int a, int b) {
 	return a*b;
 }
 
 int div(int a, int b) {
 	return a/b;
 }