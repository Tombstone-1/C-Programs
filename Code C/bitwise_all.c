#include<stdio.h>

int main(){
    int a = 1;  //0001
    int b = 2;  //0010
    
    // bitwise and
    printf("bitwise AND 1 , 2 : %d\n", a & b);  //0 : 0000

    // bitwise or
    printf("bitwise OR 1 , 2 : %d\n", a | b);  //3 : 0011

    // bitwise xor return 1 if different.
    printf("bitwise XOR 1 , 2 : %d\n", a ^ b);   //3 : 0011

    // bitwise negate
    printf("bitwise negate 1 : %d\n", ~a );     //-2 : 1110

    //bitwise left shift
    printf("bitwise left shift 1 : %d\n", a << 1);  // 2 : 0010

    //bitwise right shift
    printf("bitwise right shift 1 : %d\n", a >> 1); // 0 : 0000
}