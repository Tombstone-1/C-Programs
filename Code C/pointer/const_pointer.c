#include<stdio.h>

void fun(const int *p){
    *p=0; // see if you make const datatype but not const pointer it can change that location value.
}

int main(){
   const int i=1100;   // if you make datatype not const but pointer const you cannot change it.
   fun(&i);
   printf("%d", i);

}