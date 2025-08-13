#include<stdio.h>

int main(){
    int a, b;
    printf("input 2 no. :  \n");
    scanf("%d%d", &a, &b);

    FILE *fptr;
    fptr = fopen("file_airth.txt", "w");

    if(fptr == NULL){
        //printf("pointer NULL, file handling error ");
        fprintf(fptr, "pointer NULL, file handling error ");
    }

    fprintf(fptr, "Airthrmatic Operation from File handling\n\n");
    fprintf(fptr, "input a : %d\tb : %d\n", a, b);
    fprintf(fptr, "Addition : %d\n", a+b);
    fprintf(fptr, "Substraction : %d\n", a-b);
    fprintf(fptr, "multiplication : %d\n", a*b);
    fprintf(fptr, "division : %d\n", a/b);
    fprintf(fptr, "modulus : %d\n", a%b);

    getch();   // when program control comes here file is already created but does not write anything yet.
    fclose(fptr);


}