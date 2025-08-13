#include<stdio.h>
int is_prime(int);
int is_armstrong(int);

int main(){
    int x;
    printf("Enter a no. : ");
    scanf("%d",&x);
    
    if(is_prime(x)){
        printf("%d : Prime\n",x);
    }
    else{
        printf("%d : Not Prime\n",x);
    }

    if(is_armstrong(x)){
       printf("%d : Armstrong no.\n",x);
    }
    else{
        printf("%d : Not Armstrong no.\n",x);
    }

}

int is_prime(int x){
    int count=0;
    if (x == 0 || x == 1){
        return 0;
    }
    else{
        for(int i=2;i<x;i++){
            if(x%i==0){
                count++;
                break;
            }
        }
    }
    if(count==0){
        return 1;
    }
    else{
        return 0;
    }
}

int is_armstrong(int x){
    int r,k,count,chk,arm,mul;

    chk=x;
    count=0;
    while(x>0){
        x=x/10;
        count++;
    }
    
    x=chk;
    arm=0;
    while(x>0){
        r=x%10;
        k=count;
        mul=1;
        while(k>0){
            mul=mul*r;
            k--;
        }
        arm = arm+mul;
        x=x/10;
    }

    if(arm==chk){
        return 1;
    }
    else{
        return 0;
    }
}