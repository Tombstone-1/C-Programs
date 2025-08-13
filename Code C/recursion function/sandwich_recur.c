#include<stdio.h>
int sandwich(int);

int main(){
    int ch;
    printf("Enter no. of layer you want add in your sandwich : ");
    scanf("%d",&ch);

    sandwich(ch);
    printf("All layers are done\n");
}

int sandwich(int n){
    if(n==0){   //base case
        return 0;
    }
    else{
        printf("Adding layer %d to your sandwich\n",n);
        sandwich(n-1);  //recursive call
    }
}