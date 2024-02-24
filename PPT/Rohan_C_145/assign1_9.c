#include<stdio.h>
int main()
{
    char c;
    char a,e,i,o,u;
    printf("enter the letter to check : ");
    scanf("%c",&c);
    if ((c=='a') ||(c=='e')|| (c=='i')||(c=='o') || (c=='u'))
    {
        printf("vowel");
    }
    else
    {
        printf("consonent");
    }
    return 0;
}