#include<stdio.h>
#include<stdlib.h>

// same with function get student print student
struct student {
    char name[20];
    int marks;
    char grade;
};

void getinfo(struct student *ptr, int n){
    for(int i=0; i<n; i++){
        printf("enter name : ");
        scanf("%s", &ptr[i].name);
        printf("\nenter marks : ");
        scanf("%d", &ptr[i].marks);
        printf("enter grade : ");
        scanf(" %c", &ptr[i].grade);
    }
}
void printinfo(struct student *ptr, int n){
    for(int i=0; i<n; i++){
        printf("name : %s\n", ptr[i].name);
        printf("marks : %d\n", ptr[i].marks);
        printf("grade : %c\n",ptr[i].grade);
    }
}


int main(){
    struct student *ptr;
    int n;

    printf("enter no. of structure variable : ");
    scanf("%d", &n);

    ptr = (struct student *)malloc(n*sizeof(struct student));
    
    getinfo(ptr, n);
    printinfo(ptr, n);
    
}
