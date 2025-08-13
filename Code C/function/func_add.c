// 1st program with return type function 

#include<stdio.h>
 int main() {
 	int a,b,ans;
 	int add(int a, int b);
 	
 	printf("Enter two no. = ");
 	scanf("%d%d",&a,&b);
 	
 	ans = add(a,b);
 	printf("%d",ans);
 }
 
 int add(int a, int b) {
 	return a+b;
 }