#include<stdio.h>

int main(){
    int find, nt=0;
    int arr[5];
    int *p = &arr[0];

    printf("enter array elements : \n");
    for(int i=0; i<5; i++){
        scanf("%d", p+i);
    }

    printf("enter a ele  to find : ");
    scanf("%d", &find);

    for(int i=0; i<5; i++){
        if(*(p+i) == find){
            printf("%d found\n", *(p+i));
            //return 0;
        }
        else{
            nt++;
        }
    }

    if(nt=0){
        printf("not found\n");
    }
    //printf("not found\n");
}

// another way for counter that you return it there and print below not found
