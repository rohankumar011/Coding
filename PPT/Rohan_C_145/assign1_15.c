#include<stdio.h>
int main()
{
    int age ;
    printf("Enter the age to check eligible for marriage :");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not eligible");
    }
    return 0;
}