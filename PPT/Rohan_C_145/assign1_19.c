#include<stdio.h>
#include<math.h>
int main()
{
    int num,cnum;
    printf("Enter the number which you want to find its cube :");
    scanf("%d",&num);
    cnum=num*num*num;
    printf("cube of number id %d",cnum);
    return 0;
}