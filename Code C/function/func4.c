#include<stdio.h>
void factorial(int);

int main(){
    int x;
    printf("Enter a no. : ");
    scanf("%d",&x);

    factorial(x);
}

void factorial(int x){
    int fact=1,i;
    for(i=x;i>0;i--){
        fact = fact*i;
    }
    printf("factorial of %d : %d\n", x,fact);
}