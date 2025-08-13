//pattern
//     *    
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     * 

#include<stdio.h>

int main(){
    int l=11;
    for(int i=1; i<=l; i++){
        for(int j=1; j<=l; j++){
            if(i+j==l/2+2 || j-i==l/2 || i-j==l/2 || i+j==l+(l/2+1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}