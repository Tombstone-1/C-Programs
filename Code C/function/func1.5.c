#include<stdio.h>
#define pi 3.14
void circle(float);

int main(){
    float r;
    printf("Enter Radius : ");
    scanf("%f", &r);
    circle(r);
}

void circle(float r){
    float dia,area,circum;

    area = pi*r*r;
    dia = 2*r;
    circum = pi*dia;

    printf("Area of Circle = %.2f\nCircumference of Circle = %.2f\nDiameter = %.2f\n",area,circum,dia);
}