// performance based on grade

#include<stdio.h>

int main()
{
    char grade, attendance;
    printf("Enter Grade : ");
    scanf("%c",&grade);
    printf("Enter Attendance : ");
    getchar();
    scanf("%c",&attendance);

    switch(grade)
    {
    case 'A':
        switch(attendance)
        {
        case 'P':
            printf("Execellent\n");
            break;
        case 'A':
            printf("Very Good\n");
            break;
        default:
            printf("Value not present only A= absent P= present");
            break;
        }
        break;
    case 'B':
        switch(attendance)
        {
        case 'P':
            printf("Good\n");
            break;
        case 'A':
            printf("Best\n");
            break;
        default:
            printf("Value not present only A= absent P= present");
            break;
        }
        break;
    case 'C':
        switch(attendance)
        {
        case 'P':
            printf("Better\n");
            break;
        case 'A':
            printf("Bit Better\n");
            break;
        default:
            printf("Value not present only A= absent P= present");
            break;
        }
        break;
    case 'D':
        switch(attendance)
        {
        case 'P':
            printf("Not Good\n");
            break;
        case 'A':
            printf("Improve oneself\n");
            break;
        default:
            printf("Value not present only A= absent P= present");
            break;
        }
        break;
    default:
        printf("Incorrect Input\n");
        break;
}
}
