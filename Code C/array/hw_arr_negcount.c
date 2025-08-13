#include<stdio.h>

int main(){
    int r,count;
    printf("enter range : ");
    scanf("%d",&r);
    
    int arr[r];
    printf("enter ele :");
    for(int i=0; i<r; i++){
        scanf("%d",&arr[i]);
    }

    count=0;
    for(int i=0; i<r; i++){
        if(arr[i] < 0){
            count++;
        }
    }

    printf("Total no. of negative element : %d\n",count);
}