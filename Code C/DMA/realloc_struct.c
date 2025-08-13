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
void realloc_getinfo(struct student *ptr, int n, int nw){
    for(int i=n; i<nw; i++){
        printf("enter name : ");
        scanf("%s", &ptr[i].name);
        printf("\nenter marks : ");
        scanf("%d", &ptr[i].marks);
        printf("enter grade : ");
        scanf(" %c", &ptr[i].grade);
    }
}
void printinfo(struct student *ptr, int nw){
    for(int i=0; i<nw; i++){
        printf("\n");
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

    int nw;
    printf("enter new size of structure array including previous one : ");
    scanf("%d", &nw);

    ptr = (struct student *)realloc(ptr, nw*sizeof(int));
    realloc_getinfo(ptr, n, nw);

    printinfo(ptr, nw);
    
}
