// union should only take one input at a time as it will share it with other memory location result in wrong output.

#include<stdio.h>

union{
    int account_no;
    char name[20];
    int balance;
}var;

int main(){
    int ch;
    printf("1. A/C no \n2.Name\n3.Balance\n");
    printf("Enter a choice : ");
    scanf("%d", &ch);

    switch(ch){
        case 1: printf("enter a/c no : ");
                scanf("%d", &var.account_no);
                break;
        case 2: printf("enter name : ");
                scanf("%s", &var.name);
                break;
        case 3: printf("enter balance : ");
                scanf("%d", &var.balance);
                break;
        default:
            printf("invalid input\n");
            break;
    }
//     printf("%d\n", var.account_no);
//     printf("%s\n", var.name);
//     printf("%d\n", var.balance);

    printf("%d : size of union\n", sizeof(var));
}