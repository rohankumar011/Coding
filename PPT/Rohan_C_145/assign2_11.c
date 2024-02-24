#include<stdio.h>
#include<math.h>
int main()
{
    float amount,time,CI,rate;
    printf("Enter principle(amount):");
    scanf("%f",&amount);
    printf("Enter timme:");
    scanf("%f",&time);
    printf("Enter rate:");
    scanf("%f",&rate);
    CI=(amount*pow((1+rate/100),time));
    printf("Compound Intrest = %f",CI);
    return 0;
}