// pattern
// 01010
// 01010
// 01010
// 01010
// 01010

#include<stdio.h>

int main(){
    for(int i=1; i<=5; i++){
        for(int j=0; j<5; j++){
            printf("%d",j%2);
        }
        printf("\n");
    }
}
