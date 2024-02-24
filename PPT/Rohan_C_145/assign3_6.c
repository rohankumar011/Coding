#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two number a and b:");
    scanf("%d %d",&a,&b);
    printf("value of a= %d and value of b=%d before swap\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("value of a =%d and value of b =%d after swap ",a,b);
    return 0;
}