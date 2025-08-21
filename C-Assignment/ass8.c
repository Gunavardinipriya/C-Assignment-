#include<stdio.h>
int main()
{
    int limit,i,sum=0;
    printf("Enter the Limit value here: \t");
    scanf("%d",&limit);
    //scanf("%d",&i);
    for(i=0;i<=limit;i++)
    {
        if(i %2 !=0) 
            sum += i;                
    }
    printf("Add the odd No %d is: %d\n",limit,sum);
   
}