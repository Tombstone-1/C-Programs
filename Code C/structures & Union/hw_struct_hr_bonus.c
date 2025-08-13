// read string input from the user until \n is entered
// \n is discarded
// for space in b/w use * scanf("%[^\n]%*c", &e[i].name);

#include<stdio.h>

struct employee{    // make sure keep it all the way above from function prototype else function will not recognize struct passing on it.
    char name[10];
    int age;
    float salary;
};

void enterdetails(struct employee e[], int);
void printdetails(struct employee e[], int);

int main(){
    int x;
    printf("enter no. of employee : ");
    scanf("%d", &x);
    struct employee e[x];
    enterdetails(e, x);
    printdetails(e, x);

}

void enterdetails(struct employee e[], int x){
    
    for(int i=0; i<x; i++){
        printf("enter %d employee details : \n", i+1);
        printf("name : ");
        scanf("%s", &e[i].name);    
        printf("age : ");
        scanf("%d", &e[i].age);
        printf("salary : ");
        scanf("%f", &e[i].salary);
    }

}

struct performance_reward(struct employee e[], int x){
    struct employee h = e[0].salary;
    for(int i=0; i<x; i++){
        if(h.salary < e[i].salary){
    
        }
    }
}

void printdetails(struct employee e[], int x){
    
    printf("\n\n");
    for(int i=0; i<x; i++){
        printf("employee %d details : \n", i+1);
        printf("name : %s\n", e[i].name);
        printf("age : %d\n", e[i].age);
        printf("salary : %.2f\n", e[i].salary);
    }
}