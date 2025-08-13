/*create a structure employee whose data members are 
e_id, e_name, salary.accept data from user and display it.    
*/
#include<stdio.h>
struct employee
{    
	int e_id;    
	char e_name[10];    
	float salary;
};

int main() {
    struct employee e1;    
	printf("Enter emp id : ");    
	scanf("%d",&e1.e_id);    
	
	printf("Enter emp name : ");    
	scanf("%s",e1.e_name);    
	
	printf("Enter salary : ");    
	scanf("%f",&e1.salary);        
	
	printf("\n\t Employee id = %d",e1.e_id);    
	printf("\n\t Employee name = %s",e1.e_name);    
	printf("\n\t Employee salary = %f",e1.salary);

}