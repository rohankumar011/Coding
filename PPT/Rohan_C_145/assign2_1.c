#include<stdio.h>
int main()
{
    char str[20],str1[20];
    int num;
    printf("Enter your name :");
    fgets(str,20,stdin);
    printf("Enter your date  of birth:");
    fgets(str1,20,stdin);
    printf("Enter your mobile number: +91-");
    scanf("%d",&num);
    return 0;
}