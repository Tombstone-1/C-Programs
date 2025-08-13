#include<stdio.h>

struct store{
    int price;    //common

    union{
        struct{
            char bk_name[20];
            char bk_author[20];
        }book;

        struct{
            char color[20];
            int size;
        }shirt;

    }item;
};

int main(){
    struct store s;

    printf("enter book name : ");
    scanf("%s",&s.item.book.bk_name);
    printf("enter book author name : ");
    scanf("%s",&s.item.book.bk_author);

    printf("enter price : ");
    scanf("%d", &s.price);

    printf("enter shirt color : ");
    scanf("%s", &s.item.shirt.color);
    printf("enter shirt size : ");
    scanf("%d", &s.item.shirt.size);

    printf("\ndisplaying information of store: \n");
    printf("\n book \n");
    printf("%s\n", s.item.book.bk_name);
    printf("%s\n", s.item.book.bk_author);
    printf("%d\n", s.price);

    printf("\n shirt \n");
    printf("%s\n", s.item.shirt.color);
    printf("%d\n", s.item.shirt.size);
    printf("%d\n", s.price);

}