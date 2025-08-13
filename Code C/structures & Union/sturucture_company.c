/* create a structure wcompany whose data members are c_id,c_name,address and 
accept data from user using array of structure and diaplay it */
#include<stdio.h>
struct company
{
    int c_id;
    char c_name[20],address[50];
};
int main()
{
    struct company c1[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter Company id:");
        scanf("%d",&c1[i].c_id);
        printf("\nEnter the Company name:");v
        
        scanf("%s",&c1[i].c_name);
        printf("\nEnter address of company:");
        scanf("%s",&c1[i].address);
    }
    for(i=0;i<5;i++)
    {
        printf("\n##########Company Details###########\n");
        printf("\nCompany id = %d",c1[i].c_id);
        printf("\nCompany name = %s",c1[i].c_name);
        printf("\ncompany address =%s",c1[i].address);
    }
}