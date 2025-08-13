/*To check given string is palindrome or not.*/
#include<stdio.h>
int main()
{
    char str[20],temp[20];
    printf("\n\n\tEnter string: ");
    gets(str);
    strcpy(temp,str);
    strrev(str);
    if(strcmp(temp,str)==0)
    printf("\n\tString is Palindrome.\n\n");
    else
    printf("\n\tString is not Palindrome.\n\n");
}