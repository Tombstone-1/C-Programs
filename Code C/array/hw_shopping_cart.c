#include<stdio.h>

int main(){
    char input;
    int arr[10],ch,i=0,total=0,item=0;

    do{
        printf("\nMenu of items : \n\n");
        printf("\t1-> T-shirt = 500 rs \n\t2-> Top = 700 rs \n\t3-> Jeans = 1200 rs \n\t4-> Shoes = 1500 rs\n");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);

        if(ch==1){
            arr[i]= 500;
        }
        else if(ch==2){
            arr[i]= 700;
        }
        else if(ch==3){
            arr[i]=1200;
        }
        else if(ch==4){
            arr[i]=1500;
        }
        else{
            printf("invalid input\n\n");
            arr[i]=0;
            item--;
            
        }
        printf("you added an item into cart : %d rs\n",arr[i]);

        total+=arr[i];
        i++;
        item++;

        printf("Do you want to continue shopping or checkout (y/n) : ");
        scanf(" %c",&input);
    }
    while(input == 'y'|| input == 'Y');

    printf("Total no. of items and total amount : ");
    printf("%d items = %d rs\n",item,total);
}
