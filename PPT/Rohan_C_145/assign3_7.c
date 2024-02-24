#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div,modulo;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    add=a+b;
    sub=(a-b);
    mul=a*b;
    div=a/b;
    modulo=a%b;
    printf("if a=%d and b=%d then \n a+b=%d \n a-b=%d \n a*b=%d\na/b=%d\n Remainder when a divided by b =%d",a,b,add,sub,mul,div,modulo);
    return 0;
}