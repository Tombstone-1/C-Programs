#include<stdio.h>

int main(){
    FILE *x;

    x = fopen("test.txt", "w");     // create file and write content on it.

    if(x == NULL){
        printf("file handling error");
    }
    fprintf(x, "hello world from file handling.");      // (file pointer, "thing you want to write.") for strings
    fprintf(x, "\n%d", 8421);     // for printing integers.

    getch();        // if you see file not printing wait for this getch to get an input from terminal.
    fclose(x);      // in write and append mode file wont have text untill you do this.

}