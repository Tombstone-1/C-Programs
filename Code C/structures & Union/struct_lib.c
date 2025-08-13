// store info of 5 book and search for book.
#include<stdio.h>
#include<string.h>

struct library{
    char book_name[20];
    char author_name[20];
    float price;
};

int main(){
    struct library b1;
    char sr[20];
    
    printf("enter book name : ");
    scanf("%s", &b1.book_name);   // causing space issue. instead use scanf("%[^\n]%*c", &b1.book_name);
    //gets(b1.book_name);
    printf("enter author name :  ");
    scanf("%s", &b1.author_name);
    //gets(b1.author_name);
    printf("enter book price : ");
    scanf("%f", &b1.price);

    printf("\n\n");

    // printf("book name : %s\n", b1.book_name);
    // printf("author name : %s\n", b1.author_name);
    // printf("price : %.2f\n", b1.price);

    puts("search for a book ");
    scanf("%s", &sr);
    //printf("\nsearch for : %s", sr);

    if(strcmp(sr, b1.book_name)){
        puts("book not found");
    }
    else{
        puts("book available");
    }
}

