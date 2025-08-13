#include<stdio.h>

int main(){
    int arr[10], pos, r, temp,c;
    printf("enter array range : ");
    scanf("%d",&r);

    printf("enter %d element : \n",r);

    for(int i=0; i<r; i++){
        scanf("%d",&arr[i]);
    }

    printf("input a element value to delete from array : ");
    scanf("%d",&pos);

    c=0;
    for(int i=0; i<r; i++){
        if(pos == arr[i]){
            arr[i] = arr[i+1];
            c++;
        }
        else{
            temp = 0;
        }
    }
    
    if(temp == 0){
        printf("array element not found\n");
    }

    for(int i=0; i<r-c; i++){
        printf("%d\t",arr[i]);
    }
}