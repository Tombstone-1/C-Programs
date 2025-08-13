#include<stdio.h>

struct{
    int x,y,z;
};

int main(){
    struct techno p1 = {.y=0, x=78, z=23};  // designated initializer.
    printf("%d%d%d",p1.x, p1.y,p1.z);
}