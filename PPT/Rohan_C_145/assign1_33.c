#include<stdio.h>
#include<string.h>
int main()
{
    int str[20];
    printf("Enter the number:");
    gets(str);
    int a= strlen(str);
    printf("Number of digits in number is %d",a);
    return 0;
    
}