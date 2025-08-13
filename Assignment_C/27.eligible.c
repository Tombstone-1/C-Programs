#include<stdio.h>

int main() {
	int maths, phy, chem, total;
	
	printf("Enter three subject marks seperated by comms. =  ");
	scanf("%d, %d, %d",&maths, &phy, &chem);
	
	total = maths+phy+chem;
	
	if (maths>=65){
		if (phy >=55){
			if(chem>=50){
				if (total >=180) {
					printf("Eligible for Admission :");
				}
				else{
					printf("Sorry not eligible for admission");
				}
			}
			else{
				printf("Sorry not eligible");
			}
		}
		else{
			printf("Sorry not eligible");
		}
	}
	else{
		printf("Sorry not eligible");
	}
}