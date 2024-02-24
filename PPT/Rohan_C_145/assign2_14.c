#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("enter any string to reverse it :");
    gets(str);
    strrev(str);
    printf("The reverse is %s",str);
    return 0;
}