#include<stdio.h>

void larg_sma(int *a, int x);

int main(){
    int x;
    printf("enter range : ");
    scanf("%d", &x);
    int a[x];

    printf("enter ele : ");
    for(int i=0; i<x; i++){
        scanf("%d", a[i]);
    }

    larg_sma(&a, x);
}

void large_sma(int *a, int x){
    int max = *a[0];
    int min = *a[0];

    for(int i=0; i<x; i++){
        if(max < *a[i]){
            max = *a[i];
        }
        if(min > *a[i]){
            min = *a[i];
        }
    }

    printf("min = %d\t, max = %d\t", min, max);
}

/* not fixed*/