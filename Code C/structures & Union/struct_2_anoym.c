 assign two variable of structure with each other.
#include<stdio.h>

struct technoscript{
    char name[20];
    int marks;
    char grade;
};

int main(){
    struct technoscript x1, x2;
    
    //printf("%d", sizeof(struct technoscript)); // 28 bcoz of cpu cycle aka structure padding.
    printf("x1 marks");
    scanf("%d", &x1.marks);
    printf("x1 name");
    scanf("%s", &x1.name);
    printf("x1 grade");
    scanf(" %c", &x1.grade);

    x2 = x1;

    printf("%s", x2.name);
    printf("%d", x2.marks);
    printf("%c", x2.grade);

}
