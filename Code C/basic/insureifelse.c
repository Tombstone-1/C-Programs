#include<stdio.h>

int main()
{
    char status, gender;
    int age;
    printf("Are You Married ? y=married or n=unmarried : ");
    scanf("%c",&status);
   /* printf("Gender ? M=Male or F=Female : ");
    getchar();
    scanf("%c",&gender);
    printf("Enter your Age : ");
    scanf("%d",&age);*/


    if(status == 'n') {
        printf("Gender ? M=Male or F=Female : ");
        getchar();
        scanf("%c",&gender);
        printf("Enter your Age : ");
        scanf("%d",&age);

        if(gender== 'M' && age>30){
            printf("Driver should be insured\n");
        }
        else if(gender == 'F' && age>25){
            printf("Driver should be insured\n");
        }
        else{
            printf("Driver should not be insured yet\n");
        }
    }
    else if(status == 'y'){
        printf("Driver should be insured\n");
    }
    else{
        printf("Something wrong with inputs. Try again\n");
    }
}
