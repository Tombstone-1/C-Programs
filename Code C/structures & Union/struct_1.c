#include<stdio.h>

struct{
    char name[20];
    int marks;
    char grade;
} s1;

int main(){
    printf("enter name : ");
    scanf("%s", &s1.name);
    printf("enter marks : ");
    scanf("%d",&s1.marks);
    printf("enter grade : ");
    scanf(" %c",&s1.grade);

    printf("name : %s",s1.name);
    printf("marks : %d",s1.marks);
    printf("grade : %c",s1.grade);
}