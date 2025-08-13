// pattern
// *             * 
// *           *   
// *         *
// *       *
// *     *
// *   *
// * *
// * * * * * * * *

#include<stdio.h>

int main(){
    int l=8;
    for(int i=1; i<=l; i++){
        for(int j=1; j<=l; j++){
            if(j==1 || i+j==l+1 || i==l){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}