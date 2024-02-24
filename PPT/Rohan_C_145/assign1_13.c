#include<stdio.h>
int main()
{
    int b,h;
    float area;
    printf("Enter the base of triangle:");
    scanf("%d",&b);
    printf("Enter the height of triangle:");
    scanf("%d",&h);
    area=0.5*b*h;
    printf("Area of triangle is %.02f",area);
    return 0;
}