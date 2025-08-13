#include<stdio.h>
#include<string.h>

int main(){
    char str1[20], str2[20], charset[256] = {0};
    int l1,l2,anagrm = 1;

    puts("enter string 1 : ");
    gets(str1);
    puts("enter string 2 : ");
    gets(str2);

    l1=strlen(str1);
    l2=strlen(str2);
    
    if(l1 != l2){
        puts("\n not Anagram");
        return 0;
    }
    for(int i=0; i<l1; i++){
        charset[str1[i]] +=1;
        charset[str2[i]] -=1;
    }    

    for(int i=0; i<256; i++){
        if(charset[i] != 0){
            anagrm = 0;
            break;
        }
    }

    if(anagrm){
        puts("is Anagram");
    }
    else{
        puts("not Anagram");
    }   
}