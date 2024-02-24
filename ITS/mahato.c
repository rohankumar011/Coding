#include<stdio.h>
int add();
int main()
{
    int d=add();
    printf(" sum is %d",d);
    return 23;
}
int add()
{
    int a,b,c;
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}