#include<stdio.h>
int main()
{
    
    int id,hour,rate;
    float salary;
    printf("Input the employees ID(Max. 10 chars):");
    scanf("%d",&id);
    printf("Input the working hours:");
    scanf("%d",&hour);
    printf("Salary amount/hr:");
    scanf("%d",&rate);
    salary=hour*rate;
    printf("Employee ID = %d \nsalary =U$ %0.2f",id,salary);
    return 0;
}