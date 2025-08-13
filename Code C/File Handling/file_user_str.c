#include<stdio.h>
#include<string.h>

int main(){
    char txt[50];
    printf("enter a text for file input : ");
    scanf("%[^\n]%*c", &txt);       // got space issue solve using *c instead *s.

    FILE *x;
    x = fopen("file_string.txt", "w");

    if(x == NULL){
        fprintf(x, "pointer null, file handling error\n");
    }

    fprintf(x, "User entered text on terminal : \n\n");
    fprintf(x, "%s\n", txt);

    //getch();
    fclose(x);
}

// tommorrow continue from 59 min 04 recording . for fscanf.