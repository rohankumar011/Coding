#include<stdio.h>
 int main()
 {
    int a,b,c,d;
    printf("Enetr the first number :");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping first number is %d and second number is %d",a,b);
    return 0;
 }