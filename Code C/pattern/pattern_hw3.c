// pattern
// *********
// *       *
// *       *
// *       *
// *********

#include<stdio.h>

int main(){
    int l=5;
    for(int i=1; i<=l; i++){
        for(int j=1; j<=2*l-1; j++){
            if(j==1 || j==2*l-1 || i==1 || i==l){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}