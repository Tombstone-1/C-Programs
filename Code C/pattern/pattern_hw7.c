// pattern

// *********
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *********

#include<stdio.h>

int main(){
    int l;

    printf("enter length : ");
    scanf("%d", &l);

    for(int i=1; i<=l; i++){
        for(int j=1; j<=l; j++){
            if(i==1 || i-j==0 || i+j==l+1 || i==l){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}