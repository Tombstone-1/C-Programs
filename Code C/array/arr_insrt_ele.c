#include<stdio.h>

int main(){
    int arr[10], pos, r, val;
    printf("enter array range : ");
    scanf("%d",&r);

    printf("enter %d element : \n",r);

    for(int i=0; i<r; i++){
        scanf("%d",&arr[i]);
    }

    printf("input a position to insert an element in array : ");
    scanf("%d",&pos);

    printf("insert a value : ");
    scanf("%d",&val);

    pos-=1;

    for(int i=r; i>=pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos] = val;

    for(int i=0; i<=r; i++){
        printf("%d\t",arr[i]);
    }
}