#include<stdio.h>
int evn_odd(int);

int main(){
    int n;
    printf("Enter a range : ");
    scanf("%d",&n);

    evn_odd(n);
}

int evn_odd(int n){
    if(n==0){
        return 0;
    }
    if(n%2==0){
        printf("%d : Even\n",n);
    }
    else{
        printf("%d : Odd\n",n);
    }
    return evn_odd(n-1);
}