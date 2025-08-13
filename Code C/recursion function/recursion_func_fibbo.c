#include<stdio.h>
int fibb(int);

int main(){
    int n;
    printf("enter a range for fibbonaci : ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        printf("%d\t", fibb(i));
    }     
}

int fibb(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibb(n-1) + fibb(n-2);
    }
   

}