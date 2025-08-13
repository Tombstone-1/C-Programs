#include<stdio.h>

struct cars{
    char model[20];
    char engine[20];
    float price;
};

int main(){
    struct cars x1;
    printf("enter car model name : ");
    scanf("%s", &x1.model);
    printf("enter car enigine spec : ");
    scanf("%s", &x1.engine);
    printf("enter car price : ");
    scanf(" %f", &x1.price);

    printf("model : %s\n", x1.model);
    printf("engine : %s\n", x1.engine);
    printf("price : %.2f\n",x1.price);
}