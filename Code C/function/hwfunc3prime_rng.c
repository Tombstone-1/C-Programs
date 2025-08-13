// not done yet
#include<stdio.h>
void intrvl_prime(int r1, int r2);

int main(){
    int r1,r2;
    printf("Enter range for prime no. ->\n");
    printf("from  : ");
    scanf("%d",&r1);
    printf("to : ");
    scanf("%d",&r2);

    intrvl_prime(r1,r2);
}

void intrvl_prime(int r1, int r2){
    int count;

    if((r1==0 && r2==1)||(r1==1 && r2==0)||(r1==0 && r2==0)){     //filter
        printf("no prime no. in range\n");
    }
    else if(r1>r2){                                           //filter lower value
        r1=r1^r2;
        r2=r1^r2;
        r1=r1^r2;
    }
    else{
        printf("\n");
    }

    for(int i=r1; i<=r2; i++){
        for(int j=2; j<i; j++){
            //count=0;
            if(i%j == 0){
                count++;
                break;
            }
        }
        if (count == 0){
            printf("%d : is prime\n",i);
        }
    }
}