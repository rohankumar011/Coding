#include<stdio.h>
int main()
{
    int l,b,area;
    printf("Enter the length of rectangle:");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle:");
    scanf("%d",&b);
    area = l*b;
    printf("area of rectangle is %d",area);
    return 0;
}