/*
#include<stdio.h>
int fun(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return 7 + fun(n-2);
    }

}
int main()
{
    printf("%d",fun(4));
    return 0;
}
*/
/*
#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main ()
{
    int n;
    printf("enter the number of which you want to find the factorial:  ");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
*/
#include <stdio.h>

int fibbonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibbonacci(n - 1) + fibbonacci(n - 2));
    }
}

int main()
{
    int n, i;
    printf("entert the number:");
    scanf("%d", &n);
    printf("fibbonacci of %d is:",n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", fibbonacci(i));
    }
}