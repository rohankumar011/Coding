#include<stdio.h>
 int main ()
 {
    int seconds,hours,minutes;
    printf("Input second:");
    scanf("%d",&seconds);
    hours=seconds/3600;
    minutes=(seconds-hours*3600)/60;
    seconds=(seconds-(hours*3600))-(minutes*60);
    printf("H:M:S-%d:%d:%d",hours,minutes,seconds);
    return 0;
 }