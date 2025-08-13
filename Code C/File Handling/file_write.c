#include<stdio.h>

int main(){
    FILE *fp;

    fp = fopen("test.txt", "w"); // for writing in an file , will overrite and create a file if that not existed before.
    fclose(fp);

    // fp = fopen("test.txt", 'r'); // for reading contents in the files.
    // fclose(fp);

    if(fp == NULL){
        printf("problem in file handling");
    }

    fclose(fp);
    getch();
}
