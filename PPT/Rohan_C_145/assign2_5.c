#include<stdio.h>
int main ()
{
     int km;
     float miles ;
     printf("Input kilometers per hour :");
     scanf("%d",&km);
     miles= km*0.621371;
     printf("%f miles per hour",miles);
     return 0;
}