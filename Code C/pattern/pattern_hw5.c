//  homework pattern
//  *********
//   *     * 
//    *   *  
//     * *   
//      *

#include<stdio.h>
int main(){
    int i,j,l;
    printf("Enter a range : ");
    scanf("%d",&l);

    for(i=1; i<=l; i++){
        for(j=1; j<=2*l-1; j++){
            if(i==1 || j==i || i+j==2*l){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}