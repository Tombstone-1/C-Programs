#include<stdio.h>

struct employee{
    int emp_code;
    char emp_name[20];
    int doj;  // year
};

int main(){
    int r;
    int cu_date;

    printf("enter no. of employees : ");
    scanf("%d", &r);

    struct employee e[r];
    for(int i=0; i<r; i++){
        printf("employee code : ");
        scanf("%d",&e[i].emp_code);
        printf("name : ");
        scanf("%s",&e[i].emp_name);
        printf("date of joining : ");
        scanf("%d",&e[i].doj);
    }

    printf("enter current date to check employee tenure : ");
    scanf("%d", &cu_date);

    for(int i=0; i<r; i++){
        if((cu_date - e[i].doj) >= 3){
            printf("employee code : %d\n",e[i].emp_code);
            printf("name : %s\n", e[i].emp_name);
            printf("date of joining : %d\n", e[i].doj);
        }
    }
}