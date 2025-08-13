#include<stdio.h>
#include<stdlib.h>

void max(int *ptr, int n){
    int mx = ptr[0];
    for(int i=0; i<n; i++){
        if(mx < ptr[i]){
            mx = ptr[i];
        }
    }
    printf("%d\t", mx);
}

void min(int *ptr, int n){
    int mn = ptr[0];
    for(int i=0; i<n; i++){
        if(mn > ptr[i]){
            mn = ptr[i];
        }
    }
    printf("%d\n", mn);
}


int main(){
    int *ptr;
    int n;

    printf("require no. to create blocks : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);       // here malloc return an array block made up so we can easily parse like array.
                                    // but we can also parse it like ptr+i;
    }
    printf("\n maximum and minimum \n");
    max(ptr, n);
    min(ptr, n);
    free (ptr);

}