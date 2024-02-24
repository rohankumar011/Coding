#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year which you want to check wheather it is leap year or not:");
    scanf("%d",&year);
    if (year%400==0 || year%4==0 && year%100!=0)

    {
        printf("Leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}