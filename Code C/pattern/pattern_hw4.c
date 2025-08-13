//pattern pyramid with space
//      *    
//     * *
//    *   *
//   *     *
//  *********

#include <stdio.h>

int main(){
    int i,j,l;
    printf("Enter length = ");
    scanf("%d",&l);
    for(i=1; i<=l; i++){
        for(j=1; j<=2*l-1; j++){
            if(l==i || i+j==l+1 || j-i==l-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}