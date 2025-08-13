#include<stdio.h>
void evn_range(int);

int main(){
    int x;
    printf("Enter a range : ");
    scanf("%d",&x);

    evn_range(x);
}

void evn_range(int x){
    for(int i=1; i<=x; i++){
        if(i%2==0){
            printf("%d : even no.\n",i);
        }
    }
}
