#include<stdio.h>
int main()
{
    float fahit,celsius;
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&fahit);
    celsius=5.0/9.0*(fahit-32);
    printf("temperature in celsius is %.02f c",celsius);
    return 0;
}