#include<stdio.h>

int main(){
    int arr[10], pos, r;
    printf("enter array range : ");
    scanf("%d",&r);

    printf("enter %d element : \n",r);

    for(int i=0; i<r; i++){
        scanf("%d",&arr[i]);
    }

    printf("input a position to delete an element in array : ");
    scanf("%d",&pos);

    pos-=1;
    for(int i=pos; i<r; i++){
        arr[i] = arr[i+1];
    }
    
    for(int i=0; i<r-1; i++){
        printf("%d\t",arr[i]);
    }
}