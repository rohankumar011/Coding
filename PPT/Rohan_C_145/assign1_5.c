#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age :");
    scanf("%d",&age);
    if(age<18)
    {
        printf("user is minor");
    }
    else
    {
        printf("user is adult");
    }
    return 0;
}