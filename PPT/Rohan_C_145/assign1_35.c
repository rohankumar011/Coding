#include<stdio.h>
 int main()
 
{
    int a,sum=0,b[10];
    printf("Enter ten numbers:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
        sum=sum+b[i];
    }
    printf("sum of ten number is %d",sum);
    return 0;
}