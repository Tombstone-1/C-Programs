#include<stdio.h>
#include<stdlib.h>


int main(){
    char *ptr;
    int n;

    printf("require no. to create blocks : ");
    scanf("%d", &n);

    ptr = (char *)malloc((n+1)*sizeof(char));

    /* character way */

    // for(int i=0; i<n; i++){
    //     scanf(" %c", &ptr[i]);       
    // }

    // for(int i=0; i<n; i++){
    //     printf("%c", ptr[i]);
    // }

    /* string way */

    if(ptr == NULL){ // its null pointer return when memory not allocated.
        printf("memory cannot be allocated \n");
        return 1;
    }

    printf("enter string : ");
    scanf("%s", ptr);
    printf("%s", ptr);
    
    free(ptr);

}