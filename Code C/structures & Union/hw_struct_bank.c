/* using struct return type with array of structure */
#include<stdio.h>
#include<string.h>

struct customer{
    int acc_no;
    char name[20];
    float bal;
};

// function prototype
struct customer get_customer_info();            // structure return type
void low_balance(struct customer c[], int n);
void withdrawl_or_deposit(struct customer c[], int n);

int main(){
    struct customer c[200];
    int n;

    printf("enter no. of customer : ");
    scanf("%d", &n);

    // for parsing array of structure with return type struct function.
    for(int i=0; i<n; i++){
        printf("enter customer %d information \n",i+1);
        c[i] = get_customer_info();
    }
    
    low_balance(c,n);
    withdrawl_or_deposit(c,n);

    printf("Thank you for Banking with us\n");

}

struct customer get_customer_info(){
    struct customer c;

    printf("\naccount no : ");
    scanf("%d", &c.acc_no);
    printf("\nname : ");
    scanf("%s",&c.name);
    printf("\nbalance : ");
    scanf("%f", &c.bal);

    return c;
}

void low_balance(struct customer c[], int n){
    printf("\n Customer with Low balance then limit \n");
    for(int i=0; i<n; i++){
        if(c[i].bal < 100){
            printf("\nAccount no. : %d\n", c[i].acc_no);
            printf("Customer Name : %s\n", c[i].name);
            printf("Balance : %.2f\n", c[i].bal);
        }
    }
}

void withdrawl_or_deposit(struct customer c[], int n){
    int ch, ac, amt;
    char cust_nm[20];

    printf("\nWithdrawal or Deposit \n");
    printf("\nenter account no. :  ");
    scanf("%d", &ac);
    printf("\nenter name : ");
    scanf("%s", &cust_nm);

    printf("\nenter code 0 for withdrawal and code 1 for deposit : ");
    scanf("%d", &ch);

    if(ch == 0){
        printf("\n withdrawal money\n");
        printf("enter amount : ");
        scanf("%d", &amt);

        for(int i=0; i<n; i++){ 
            if(c[i].acc_no == ac && !strcmp(c[i].name, cust_nm)){    // string can't be compare with normal means. !
                if(c[i].bal < amt){
                    printf("\nthe balance is insufficient for %d withdrawal amount\n", amt);
                    printf("\nyour balance : %.2f\n", c[i].bal);
                }
                else{
                    printf("before withdrawal : %.2f\n", c[i].bal);
                    c[i].bal = c[i].bal - (float)amt;
                    printf("your balance amount : %.2f\n", c[i].bal);
                }
            }
        }
    }
    else if(ch == 1){
        printf("\nDeposit Money\n");
        printf("enter amount : ");
        scanf("%d", &amt);

        for(int i=0; i<n; i++){
            if(c[i].acc_no == ac && !strcmp(c[i].name, cust_nm)){
                c[i].bal = c[i].bal + (float)amt;
                printf("your balance amount : %.2f\n", c[i].bal);
            }
        }
    }
    else{
        printf("invalid input\n");
    }
}