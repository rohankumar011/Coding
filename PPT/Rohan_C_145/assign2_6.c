#include<stdio.h>
int main()
{
     int min,hour;
     printf("Input minutes:");
     scanf("%d",&min);
     hour=min/60;
     min=min%60;
     printf("%d Hours, %d Minutes ",hour,min);
     return 0;

}