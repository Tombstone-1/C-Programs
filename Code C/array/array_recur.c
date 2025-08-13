#include<stdio.h>
int print_arr(int[], int);

int main(){
    int r;

    printf("Enter range : ");
    scanf("%d",&r);

    int arr[r];

    for(int i=0; i<r; i++){
        printf("enter ele : ");
        scanf("%d",&arr[i]);
    }

    print_arr(arr,r-1);
}

int print_arr(int arr[], int r){
    if(r < 0){
        return 0;
    }
    else{
        printf("arr ele : %d\n",arr[r]);
        return print_arr(arr,r-1);
    }
}