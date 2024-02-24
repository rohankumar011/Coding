#include<stdio.h>
int main()
{
    int num1,num2,swap;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swaping the first number is:%d\n",num1);
    printf("After swaping second number is :%d",num2);
    return 0;
}