#include<stdio.h>
int evn_or_odd(int);

int main(){
    int x;
    printf("Enter a no. : ");
    scanf("%d",&x);
    if(evn_or_odd(x)){
        printf("%d is even no.\n",x);
    }
    else{
        printf("%d is odd no.\n",x);
    }
}

int evn_or_odd(int x){
    if(x%2==0){
        return 1;
    }
    else{
        return 0;
    }
}