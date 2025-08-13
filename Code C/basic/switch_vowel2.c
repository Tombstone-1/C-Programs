/*C program to check given character is vowel or consonant 
using switch case.*/
#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character:");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        	
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': printf("Character is vowel");
                break;
        default: printf("Character is consonant ");
                break;
    }
}