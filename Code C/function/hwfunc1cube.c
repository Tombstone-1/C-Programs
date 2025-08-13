#include<stdio.h>
void cube();

int main(){
    cube();
}

void cube(){
    int x;
    printf("Enter a no. : ");
    scanf("%d",&x);
    printf("cube of %d : %d\n",x,x*x*x);
}