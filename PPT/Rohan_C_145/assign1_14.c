#include<stdio.h>
#include<math.h>
int main()
{
    int s;
    float area ;
    printf("Enter the side of equilateral triangle:");
    scanf("%d",&s);
    area = ((sqrt(3))/4*s*s);
    printf("Area of equilateral triangle is : %.02f",area);
    return 0;
}