#include<stdio.h>

int main(){
    int r, arr[10];

    printf("enter range : ");
    scanf("%d",&r);

    printf("enter ele : \n");    
    for(int i=0; i<r; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<r; i++){
        for(int j=i+1; j<r; j++){
            if(arr[i] == arr[j]){
                for(int k=j; k<r; k++){
                    arr[k] = arr[k+1];
                }
            }
           r--; 
        }
    }

    for(int i=0; i<r; i++){
        printf("%d ", arr[i]);
    }

}