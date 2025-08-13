#include<stdio.h>
void rng_armstrong(int,int);

int main(){
    int r1,r2;
    printf("Enter range for prime no. ->\n");
    printf("from  : ");
    scanf("%d",&r1);
    printf("to : ");
    scanf("%d",&r2);

    rng_armstrong(r1,r2);
}

void rng_armstrong(int r1, int r2){
    int x,r,k,count,chk,arm,mul;
    for(int i=r1; i<=r2; i++){
        chk=i;
        x=i;
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
            printf("%d : is Armstrong\n",arm);
        }
    }
    
}