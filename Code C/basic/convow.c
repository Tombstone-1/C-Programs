#include<stdio.h>
 int main()
 {
     char c;
     printf("Enter a character =  ");
     scanf("%c",&c);

     (c=='a'?(printf("character is vowel\n"))
      :(c=='e'?(printf("character is vowel\n"))
        :(c=='i'?(printf("character is vowel\n"))
          :(c=='o'?(printf("character is vowel\n"))
            :(c=='u'?(printf("character is vowel\n"))
              :(printf("character is consonant\n"))
              )
            )
          )
        )
      );
 }
