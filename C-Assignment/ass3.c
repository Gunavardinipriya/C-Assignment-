#include <stdio.h>
int main()
{
    int p;
    float si,r,n;
    printf("Find Simple interest: \n");
    scanf("%d",&p);
    scanf("%f",&r);
    scanf("%f",&n);
    si=p*r*n/100;
    printf("%f",si); 
}