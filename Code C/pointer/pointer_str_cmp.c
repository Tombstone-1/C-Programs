#include<stdio.h>
#include<string.h>

int main(){
    char str1[10], str2[10];
    char *p1 = &str1[0];
    char *p2 = &str2[0];
    int cmp=0;

    puts("enter string 1 : ");
    gets(p1);
    //puts(p1);

    puts("enter string 2 : ");
    gets(p2);
    //puts(p2);

    int l1 = strlen(p1);
    int l2 = strlen(p2);

    if(l1 == l2){
        for(int i=0; i<=l1; i++){
            if(*(p1+i) != *(p2+i)){
                cmp++;
                break;
            }
        }
    }
    else{
        cmp=1;
    }

    if(!cmp){
        printf("both string same\n");
    }
    else{
        printf("different string \n");
    }

}
