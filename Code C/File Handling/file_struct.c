

#include<stdio.h>

struct student{
    int marks;
    char grade;
    int percentage;
};

struct student getinfo(){
    struct student s;

    printf("enter student marks : ");
    scanf("%d", &s.marks);
    printf("enter student grade : ");
    scanf(" %c", &s.grade);
    printf("enter student percentage : ");
    scanf("%d", &s.percentage);

    return s;
}

int main(){
    struct student s;
    struct student u;
    FILE *fp;
    
    s = getinfo();

    printf("marks : %d, grade : %c, percentage : %d\n", s.marks, s.grade, s.percentage);
    fp = fopen("struct_file.txt", "w");   // fopen return address and taken in pointer.
    
    if( fp == NULL){
        printf("error while writing\n");
    }
    else{
        printf("file created\n");
    }
    // fprintf() is used for printing in file but for wrinting in structure use fwrite().
    // (address of structure variable, sizeof(struct variable), no. of copies, file pointer)
    fwrite(&s, sizeof(s), 1, fp);

    // structure file write returns binary file normal txt file will become unreadable.
    fclose(fp);

    // for reading file from structure and placing it in file.
    fp = fopen("struct_file.txt", "r");

    if(fp == NULL){
        printf("error in reading from file \n");
    }
    else{
        printf("reading file .... \n");
    }
    // reading a data from file and putting it on another structure.
    fread(&u, sizeof(u), 1, fp); // (structure variable, sizeof struct, no. of copies, file pointer).

    printf("%d , %c, %d\n", u.marks, u.grade, u.percentage);
    fclose(fp);

}