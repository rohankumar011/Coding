#include<stdio.h>
int main()
{
    float r,v;
    float pi=3.14;
    printf("Input radius of sphare :");
    scanf("%f",&r);
    v = 4.0/3.0*pi*r*r*r;
    printf("The volume of sphare is %f",v);
    return 0;
}