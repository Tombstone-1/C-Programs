#include<stdio.h>

int main(){
    int c=0;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            printf("%d",i%2);   
        }
        printf("\n");
    }
}
