#include<stdio.h>
int maximum(int,int);

int main(){
    int x,y;
    printf("Enter 2 no. : ");
    scanf("%d%d",&x,&y);
    printf("%d is maximum\n",maximum(x,y));
}

int maximum(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}