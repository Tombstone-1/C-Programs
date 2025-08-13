// store info of 5 students and use function to display.
#include<stdio.h>

struct students{
    char name[20];
    int marks;
    char grade;
};

int main(){
    struct students s1[5];
    
    for(int i=0; i<5; i++){
        printf("enter student %d info : \n",i+1);
        printf("name : ");
        scanf("%s", &s1[i].name);
        printf("marks : ");
        scanf("%d", &s1[i].marks);
        printf("grade : ");
        scanf(" %c", &s1[i].grade);
    }
    printf("\n\n");
    
   for(int i=0; i<5; i++){
        printf("student %d info : \n",i+1);
        printf("name : %s\n", s1[i].name);
        printf("marks : %d\n", s1[i].marks);
        printf("grade : %c\n",s1[i].grade);
    }
}

