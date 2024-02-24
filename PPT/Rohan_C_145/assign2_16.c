#include<stdio.h>
int main ()
{
    int dist;
    float fuel;
    printf("Input total distance in  KM:");
    scanf("%d",&dist);
    printf("Input total fuel spent in liters:");
    scanf("%f",&fuel);
   float  average= dist/fuel;
   printf("Average consumption(Km/lt) %f",average);
   return 0;


}