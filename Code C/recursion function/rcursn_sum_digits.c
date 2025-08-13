#include<stdio.h>
int sum_digit(int);

int main(){
    int num=123;
    printf("Sum of Digits : %d\n",sum_digit(num));
}

int sum_digit(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10+sum_digit(n/10);
    }
}