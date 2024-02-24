#include<stdio.h>
int main()
{
    int unit,punit,bill;
    printf("Enter the no of units used :");
    scanf("%d",&unit);
    printf("Enter the cost of one unit :");
    scanf("%d",&punit);
    bill=(punit*unit);
    printf("total electricity bill=%d",bill);
    return 0;

}