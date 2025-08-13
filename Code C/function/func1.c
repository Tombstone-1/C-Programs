#include<stdio.h>
#define pi 3.14
void circle();

int main(){
    circle();
}

void circle(){
    float r,dia,area,circum;
    printf("Enter Radius : ");
    scanf("%f", &r);

    area = pi*r*r;
    dia = 2*r;
    circum = pi*dia;

    printf("Area of Circle = %.2f\nCircumference of Circle = %.2f\nDiameter = %.2f\n",area,circum,dia);
}