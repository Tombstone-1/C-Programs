// store info of 5 students and show percentage.
#include<stdio.h>

struct students{
    char name[20];
    int phy, chem, eng, bio, maths;
    float per;
};

int main(){
    struct students s[5];
    
    for(int i=0; i<5; i++){
        printf("\nenter student %d info : \n",i+1);
        printf("name : ");
        scanf("%s",&s[i].name);
        printf("chemistry marks : ");
        scanf("%d", &s[i].chem);
        printf("Physics marks : ");
        scanf("%d", &s[i].phy);
        printf("English marks : ");
        scanf("%d", &s[i].eng);
        printf("Biology marks : ");
        scanf("%d", &s[i].bio);
        printf("Maths marks : ");
        scanf("%d", &s[i].maths);

        s[i].per = (float)(s[i].chem+s[i].phy+s[i].eng+s[i].bio+s[i].maths)/(float)500 * (float)100;
        
    }
    printf("\n\n");
    
   for(int i=0; i<5; i++){
        printf("\nstudent %d info : \n",i+1);
        printf("name : %s\n", s[i].name);
        printf("chemistry marks : %d\tPhysics marks : %d\tEnglish marks : %d\tBiology marks : %d\tMaths marks : %d\n",
         s[i].chem,s[i].phy,s[i].eng,s[i].bio,s[i].maths);
        printf("percentage : %.2f\n",s[i].per);
    }
}

