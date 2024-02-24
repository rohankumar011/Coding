#include<stdio.h>
#include<string.h>
int main()
{
    char str[4];
    printf("Enter the number to check number is single digit or double digit or triple digit:");
    scanf("%s",&str);
    int b= strlen(str);
    if(b==1)
    {
        printf("Single digit number");
    }
    else if(b==2)
    {
        printf("Double digit number");
    }
    else if(b==3)
    { 
        printf("Triple digit number");
    }
    else
    {
        printf("enter valid number");
    }
    return 0;
}