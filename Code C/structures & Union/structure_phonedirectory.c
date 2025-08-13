/*Create a structure person whose data members are name, ph_no,address.
accept data for 2 objects from user and display it. */
#include<stdio.h>
struct person
{
    long int phone_number;
    char name[30],address[50];
}p2;
int main()
{
    struct person p1;
    printf("\nEnter the Name of the person 1:");
    scanf("%s",&p1.name);
    printf("\nEnter the Phone Number of Person 1:");
    scanf("%ld",&p1.phone_number);
    printf("\nEnter the Address of Person 1:");
    scanf("%s",&p1.address);
    printf("\n*********************************************************\n");
    printf("\nEnter the name of Person 2:");
    scanf("%s",&p2.name);
    printf("\nEnter the Phone_number of Person 2:");
    scanf("%ld",&p2.phone_number);
    printf("\nEnter the Address of person 2:");
    scanf("%s",&p2.address);
    printf("\n**********************************************************");
    printf("\nDetails Of Person:");
    printf("\nName of Person 1= %s",p1.name);
    printf("\nPhone_number of person 1 = %ld",p1.phone_number);
    printf("\nAddress of Person 1 = %s",p1.address);
    printf("\n***********************************************************");
    printf("\n Name of Person 2 = %s",p2.name);
    printf("\n Phone_number of Person 2 = %ld",p2.phone_number);
    printf("\n Address of Person 2 = %s",p2.address);
    
}