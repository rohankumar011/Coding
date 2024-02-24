#include<stdio.h>
int main()
{
    float p,r,t,SI;
    printf("Enter the principle amount :");
    scanf("%f",&p);
    printf("Enter the time period:");
    scanf("%f",&t);
    printf("Enter the rate of intrest:");
    scanf("%f",&r);
    SI=(p*r*t)/100;
    printf("simple intrest is %.02f",SI);
    return 0;

}