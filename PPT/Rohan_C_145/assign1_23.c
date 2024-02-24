#include<stdio.h>
int main()
{
    int id,hour,amount,rate;
    printf("Enter the id of employee:");
    scanf("%d",&id);
    printf("Enter the hour he work in month:");
    scanf("%d",&hour);
    printf("amount recieved for per hour:");
    scanf("%d",&rate);
    amount=hour*rate;
    printf("Employee id is %d and salary he recieve is %d",id,amount);
    return 0;

}