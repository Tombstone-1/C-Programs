#include<stdio.h>
int print_nat_no(int);

int main(){
    int n;
    printf("Enter a range : ");
    scanf("%d",&n);

    print_nat_no(n);
}

int print_nat_no(int n){
    int i;
    if(n==0){
        return 0;
    }
    printf("%d\n",n);
    return print_nat_no(n-1);
}