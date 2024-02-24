#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter two number to add:");
    scanf("%d %d",&a,&b);
    sum=a-(-b);
    printf("sum of number without using + operator is %d",sum);
    return 0;
}