#include<stdio.h>
int sum_arr_ele(int[], int);

int main(){  
    int sum=0, r;
    printf("enter a range : ");
    scanf("%d",&r);
    int arr[r];

    for(int i=0; i<r; i++){
        printf("enter ele for arr : ");
        scanf("%d",&arr[i]);
    }

    sum = sum_arr_ele(arr,r-1);
    printf("Sum of array ele : %d",sum);
    
}

int sum_arr_ele( int arr[], int r ) {
    if (r < 0) {
        return 0;
    } else{
        return arr[r] + sum_arr_ele(arr, r-1);
    }
}