#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    printf("positive no");
    else if (a==0)
    printf("neither positive nor negative");
    else
    {
        printf("negative");
    }
    return 0;
}