#include<stdio.h>
int main()
{
    float Marks;
    //float Tamil,English,Maths,Science,Social,Marks;
    printf("Enter the Marks out of 100: \n");
    /*scanf("%f",&Tamil);
    scanf("%f",&English);
    scanf("%f",&Maths);
    scanf("%f",&Science);
    scanf("%f",&Social);*/
    scanf("%f",&Marks);
    if(Marks>=50)
    {
        printf("pass \n");
        printf("congratulation You passed the subject ");
    }
    else{
        printf("Fail \n");
        printf("Its ok You can try one more time:");
    }
    
}