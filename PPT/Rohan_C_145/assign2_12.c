#include<stdio.h>
int main()
{
     int a,b,c,d,e,total,average;
     float percentage;
     printf("Enter marks of five subjects:");
     scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
     total=(a+b+c+d+e);
     average=total/5;
     percentage=(total*100)/500;
     printf("Total=%d\nAverage=%d\nPercentage=%.02f",total,average,percentage);
     return 0;

}