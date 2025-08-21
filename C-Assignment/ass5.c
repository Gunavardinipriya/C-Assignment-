#include<stdio.h>
int main()
{
    float Marks;
    char Grade;
    printf("Enter the Marks here: \n");
    scanf("%f",&Marks);
    scanf("%c",&Grade);
    if(Marks>90)
    {
        printf("A Grade");

    }
    else if (Marks>=89)

    {
        printf("B Grade");
    }
    else if (Marks>=79)

    {
        printf("C Grade");
    }
    else if (Marks>=69)
    {
        printf("D Grade");
    }
    else if (Marks>=59)
    {
        printf("E Grade");
    }
    else{
        printf("Fail");
    }
}    