#include<stdio.h>

struct student {
    char name[20];
    int marks;
    char grade;
};

void getinfo(struct student *p);

int main(){
    struct student s;
    struct student *p=&s;

    getinfo(p);

    printf("name : %s\n", p->name);
    printf("marks : %d\n", p->marks);
    printf("grade : %c\n",p->grade);
    
}

void getinfo(struct student *p){
    printf("\nenter name : ");
    scanf("%[^\n]*%s", &(p->name));     //here & is nessacry as s only have address of struct. but it also need address of name.
    printf("\nenter marks : ");
    scanf("%d", &(p->marks));
    printf("\n enter grade : ");
    scanf(" %c", &(p->grade));
}