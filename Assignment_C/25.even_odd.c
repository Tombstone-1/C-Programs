// to print even numbers between 1 to 100

# include<stdio.h>

int main() {
	
	int i;
	
	for(i=1;i<=100;i++){
		if(i%2==0){
			printf("\n%d Even",i);
		}
		else{
			printf("\n%d Odd",i);
		}
	}
}