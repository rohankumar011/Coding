#include<stdio.h>
int main()
{
     int days ,year,weeks;
     printf("Number of days:");
     scanf("%d",&days);
     year=days/365;
     weeks=(days%365)/7;
     days=(days-(year*365))-(weeks*7);
     printf("Years:%d\nWeeks: %d\nDays:%d",year,weeks,days);
     return 0;
}



