#include<stdio.h>
#include<stdlib.h>

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
    for(int i=0; i<n; i++){
        printf("%d", ptr[i]);
    }

    free(ptr);

}