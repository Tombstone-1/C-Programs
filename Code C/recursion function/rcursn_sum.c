#include<stdio.h>
int add_no(int);

int main(){
    int n;
    printf("Enter a end point. : ");
    scanf("%d", &n);

    printf("addition of natural no. till range = %d",add_no(n));
}

int add_no(int n){
    if(n==0){
        return 0;
    }
    return n+add_no(n-1);
}
