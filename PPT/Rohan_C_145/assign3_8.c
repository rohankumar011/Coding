#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number to find relation :");
    scanf("%d %d",&a,&b);
    if(a==b)
    printf("%d == %d is evaluated to 1\n",a,b);
    else
    printf("%d == %d is evaluated  to 0\n",a,b);
    if(a>b)
    printf("%d > %d is evaluated to 1\n",a,b);
    else
    printf("%d > %d is evaluated  to 0\n",a,b);
    if(a<b)
    printf("%d < %d is evaluated to 1\n",a,b);
    else
    printf("%d < %d is evaluated  to 0\n",a,b);
    if(a!=b)
    printf("%d != %d is evaluated to 1\n",a,b);
    else
    printf("%d != %d is evaluated  to 0\n",a,b);
    if(a>=b)
    printf("%d >= %d is evaluated to 1\n",a,b);
    else
    printf("%d >= %d is evaluated  to 0\n",a,b);
    if(a<=b)
    printf("%d <= %d is evaluated to 1\n",a,b);
    else
    printf("%d <= %d is evaluated  to 0\n",a,b);
    return 0;
    
}