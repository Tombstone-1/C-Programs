#include<stdio.h>

int main(){
    int arr[5];
    int *p = &arr[0];  //can be written as arr[0] or a only.

    printf("enter a array elements : ");
    for(int i=0; i<5; i++){
        scanf("%d", p+i); // if i use & with p it will change value of p.
    }

    printf("print elements : ");
    for(int i=0; i<5; i++){
        printf("%d\t", *(p+i)); // bracket is must.
    }
}