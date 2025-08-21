#include<stdio.h>
int main()
{
    int date;
    char day;
    printf("Enter the date here: \n");
    scanf("%d",&date);
    scanf("%c",&day);
   /* if(date==1)
    {
        printf("Monday");
    }
    else if (date==2)
    {
        printf("Tuesday");
    }
    else if (date=3)
    {
        printf("Wednesday");
    }
    else if (date==4)
    {
        printf("Thursday");
    }
    else if (date==5)
    {
        printf("Friday");
    }
    else if (date==6)
    {
        printf("Saturday");
    }
    else if (date==7)
    {
        printf("Sunday");        
    }
            
    else
    {
        printf("not Valid");
    }*/

    switch(date)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default: 
        printf("Invalid Entry");
    }
} 

