#include<stdio.h>
int main()
{
    float WIT1,NOIT1,WIT2,NOIT2,average;
    printf("Weight - Item1: ");
    scanf("%f",&WIT1);
    printf("No. of items1:");
    scanf("%f",&NOIT1);
    printf("Weight - Item2: ");
    scanf("%f",&WIT2);
    printf("No. of items2:");
    scanf("%f",&NOIT2);
    average =((WIT1*NOIT1)+(WIT2*NOIT2))/(NOIT1+NOIT2);

    printf("Average Value = %f",average);
    return 0;
    
}