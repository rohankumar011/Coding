#include<stdio.h>
int main()
{
    float a,b ,c;
    printf("Input two angles of triangle seperated by comma:");
    scanf("%f ,%f",&a,&b);
    c=180.0-(a+b);
    printf("Third angle of the triangle %0.2f:",c);
     return 0;
}