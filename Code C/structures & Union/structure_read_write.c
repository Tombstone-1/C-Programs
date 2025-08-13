#include<stdio.h>

// define structure here
struct student{
    int roll;       //4    
	char name[10];  //10    
	float per;      //4
	};

int main() {
	// initilize structure here.
    struct student s1={1,"Nilam",85.26};
    
    // for fetch use alais name in this case s1.
    printf("\n Roll number = %d",s1.roll);
	printf("\n Name = %s",s1.name);    
	printf("\n Percentage = %.2f",s1.per);    
}