#include<stdio.h>
int main(int arg,char *argv[])
{
    int sum = 0;
    for(int i=1;argv[i];i++)
    {
        sum = sum + atoi(argv[i]);
    }
    printf("Sum = %d",sum);
    return 0;
}