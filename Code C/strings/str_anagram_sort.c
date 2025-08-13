#include<stdio.h>
#include<string.h>

int main(){
    int l1, l2, temp, anagm = 0;
    char str1[20], str2[20];

    puts("enter string 1 : ");
    gets(str1);

    puts("enter string 2 : ");
    gets(str2);

    l1=strlen(str1);
    l2=strlen(str2);

    if(l1 == l2){
        for(int i=0; i<l1; i++){
            for(int j=i+1; j<l1; j++){
                if(str1[i] > str1[j]){
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
                }

                if(str2[i] > str2[j]){
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp; 
                }
            }
        }
    }
    else{
        anagm++;
    }

    if(strcmp(str1, str2) == 0 && anagm == 0){
        puts("\nAnagram ");
    }
    else{
        puts("\nnot Anagram");
    }
}

// using hash map for character 0 to 255;