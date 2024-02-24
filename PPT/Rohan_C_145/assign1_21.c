#include<stdio.h>
int main ()
{
    int maths,science,hindi,english,sst,total;
    float average,percentage;
    printf("Enter the marks of maths:");
    scanf("%d",&maths);
     printf("Enter the marks of science:");
    scanf("%d",&science);
     printf("Enter the marks of hindi:");
    scanf("%d",&hindi);
     printf("Enter the marks of english :");
    scanf("%d",&english);
     printf("Enter the marks of sst :");
    scanf("%d",&sst);
    total=(maths +science + hindi + sst + english);
    printf("Total marks is %d\n",total);
    average=(maths+science+hindi+english+sst)/5;
    printf("Average of all subject is : %0.2f\n ",average);
    percentage=(total/100)*500;
    printf("percentage got %0.2f\n",percentage);
    return 0;

}