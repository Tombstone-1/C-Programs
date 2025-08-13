#include<stdio.h>

int main(){
    FILE *fp;

    fp = fopen("test.txt", "a");    //like write it can create file that does not exist but more function than write.

    if(fp == NULL){
        printf("problem in file handling");
    }
    
    getch();
    fclose(fp);
}