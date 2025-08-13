#include<stdio.h>

struct student{
    int roll_no;
    char name[20];
    char department[20];
    char course[20];
    int joining_year;
};

void getdata(struct student s[],int n); 
void printdata(struct student s[], int n, int srch);

int main(){
    int n, srch;
    struct student s[450];
    printf("enter no of students to enter : \n");
    scanf("%d", &n);

    getdata(s,n);

    printf("enter student roll no for search : ");
    scanf("%d", &srch);

    printdata(s, n, srch);
}

void getdata(struct student s[], int n){
    
    for(int i=0; i<n; i++){
        printf("enter student %d details : \n", i+1);
        printf("\nroll no : ");
        scanf("%d",&s[i].roll_no);
        printf("\nname : ");
        scanf("%s", &s[i].name);
        printf("\ndepartment : ");
        scanf("%s", &s[i].department);
        printf("\ncourse : ");
        scanf("%s", &s[i].course);
        printf("\njoining year : ");
        scanf("%d",&s[i].joining_year);
    }
}

void printdata(struct student s[], int n, int srch){
    int c=1;
    for(int i=0; i<n; i++){  //later n will replace with array size.
        
        if(srch == s[i].roll_no){
            printf("roll no : %d\n", s[i].roll_no);
            printf("name : %s\n", s[i].name);
            printf("department : %s\n", s[i].department);
            printf("course : %s\n", s[i].course);
            printf("joining year : %d\n", s[i].joining_year);

            break;
        }
        else{
            c=0;
        }
    }
    if(!c){
        printf("detail not found\n");
    }
    
}
