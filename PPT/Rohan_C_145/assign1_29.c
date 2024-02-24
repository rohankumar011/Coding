#include<stdio.h>
int main()
{
    float fahre,celsius,celsius1,fahre1;
    int choice;
    printf("Enter  1 for convert  Fahrenheit to celsius\n: ");
    printf("Enter 2 for convert Celsius to Fahrenheit : ");
    scanf("%d",&choice);
    switch(choice )
    {
        case 1:
        printf("Enter the temp in Fahrenheit :");
        scanf("%f",&fahre);
        celsius = (fahre-32)*5/9;
        printf("temp in celsius:%f",celsius);
        break;
        case 2:
        printf("Enter the temp in celsius :");
        scanf("%f",celsius1);
        fahre1 = (celsius1*(9/5))+32;
        printf("Temp in fahrenheit :%f",fahre1);
        default:
        printf("Enter the valid number");
    }
    return 0;
}