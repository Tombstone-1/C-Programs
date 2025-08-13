#include<stdio.h>

int main(){
    int n;
    FILE *x;

    printf("enter a no. :  ");
    scanf("%d", &n);

    x = fopen("test.txt", "w");

    if(x == NULL){
        printf("Pointer null, File handling error");
        fprintf(x,"Pointer null, File handling error");
    }

    fprintf(x,"hello World from file handling operations.");
    fprintf(x, "\n this no. is user input : %d", n);
    fprintf(x, "\n Stored at address : %x", &n);

    getch();
    fclose(x);   
}