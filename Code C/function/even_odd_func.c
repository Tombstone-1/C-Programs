// c program to check even or odd

#include<stdio.h>
int main() {
	int n; 
	int chk(int n);  // declaration parameters are called actual parameters or arguments.memory gets allocated for this.
	
	printf("Enter two no = ");
	scanf("%d", &n);
	
	if(chk(n)) {
		printf("No. is even");
	}
	else {
		printf("no. is odd");
	}
}
 int chk(int n) {      // definition parameters are called formal parameters or arguements. this is for performance.
 	/*if (n%2==0) {
 		return 1;
	 }
	 else {
	 	return 0;
	 }*/
	 return (n%2==0)? 1:0;
 }
 