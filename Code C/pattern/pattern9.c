// pattern
//        *
//       * * *
//     * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include<stdio.h>

int main(){
    int m,l;
    printf("enter length : ");
    scanf("%d",&l);
    
    m=l/2+1;

    for(int i=1; i<=m; i++){
        for(int j=m; j>=i; j--){    //make space
            printf("  ");
        }
        for(int k=1; k<=2*i-1; k++){  // make pattern
            printf("* ");
        }
        printf("\n");
    }

    /* 2nd half leading by 1 */

    for(int i=2; i<=m; i++){
        for(int j=1; j<=i; j++){  // make space 
            printf("  ");
        }
        for(int k=i; k<=2*m-i; k++){  // make pattern
            printf("* ");
        }
        printf("\n");
    }
        
}