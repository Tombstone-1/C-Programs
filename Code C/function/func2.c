#include<stdio.h>
void maximum(int,int);

int main(){
    int x,y;
    printf("Enter two no. : ");
    scanf("%d%d",&x,&y);
    maximum(x,y);
}

void maximum(int x, int y){
    if(x>y){
        printf("%d is greater\n",x);
    }
    else{
        printf("%d is greater\n",y);
    }
}