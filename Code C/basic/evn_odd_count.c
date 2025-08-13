#include<stdio.h>

int main(){
    int evn=0, odd=0, r;
    printf("enter a range : ");
    scanf("%d",&r);

    int arr[r];
    for(int i=0; i<r; i++){
        printf("enter ele : ");
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<r; i++){
        if(arr[i]%2==0){
            evn++;
        }
        else{
            odd++;
        }
    }

    printf("Even count : %d\nOdd count : %d\n",evn,odd);
}