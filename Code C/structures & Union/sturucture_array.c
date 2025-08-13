//Array of structure
#include<stdio.h>
struct student{
    int roll;
    char name[10];
    float per;
};
int main()
{
    struct student s1[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n Enter roll no: ");
        scanf("%d",&s1[i].roll);
        printf("\n Enter name :");
        scanf("%s",s1[i].name);
        printf("\n Enter percentage : ");
        scanf("%f",&s1[i].per);
    }
    for(i=0;i<5;i++)
    {
        printf("\n\t*** Student Data ***\n");
        printf("\n Roll no: %d",s1[i].roll);
        printf("\n Name : %s",s1[i].name);
        printf("\n Percentage : %f",s1[i].per);
    }
}