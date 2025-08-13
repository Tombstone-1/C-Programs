#include<stdio.h>

int main(){
    int r, temp, ch, arr[10];

    printf("enter range : ");
    scanf("%d",&r);

    printf("enter ele : \n");    
    for(int i=0; i<r; i++){
        scanf("%d",&arr[i]);
    }

    printf("1 for acsending and 2 for descending : \n");
    scanf("%d",&ch);

    for(int i=0; i<r; i++){
        for(int j=i+1; j<r; j++){
            if(arr[i] > arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    if(ch == 1){
        printf("Ascending Order : \n");
        for(int i=0; i<r; i++){
            printf("%d ", arr[i]);
        }
    }
    else if(ch == 2){
        printf("\nDescending Order : \n");
        for(int i=r-1; i>=0; i--){
            printf("%d ", arr[i]);
        }
    }
    else{
        printf("invalid choice\n");
    }
}