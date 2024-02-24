#include<stdio.h>
int main()
{
    int age ;
    printf("Enter the age to check eligibility for marriage ");
    scanf("%d",&age);
    if(age>=21)
    {
        printf("Eligible");
    }
    else
    {
        printf("not eligible");
    }
    return 0;
}