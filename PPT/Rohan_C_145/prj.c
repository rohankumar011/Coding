#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char c[4] = "Rohan" ;
    int p[4] = "12345" ;
    char a[10];
    int b[10];
    printf("Enter the user ID :");
    for(int i=0;i<4;i++){
    scanf("%c",&a[i]);}
    printf("Enter the password:");
    for(int i=0;i<4;i++)
    {
        getchar("%d",b[i]);
        printf("*");
    }

}