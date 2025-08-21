#include <stdio.h>
int main()
{
    int a;
    float b;
    printf("Add two Numbers: \n");
    scanf("%d" ,&a);
    scanf("%f",&b);
    float c=a+b;
    printf("Total Sum is: %.2f" ,c);
}