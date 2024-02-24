// #include <stdio.h>
// int main()
// {
//     int num, rev=0, mul, sum = 0;
//     printf("Enter the number : ");
//     scanf("%d", &num);
//     int cnum=num;
//     for (int i = 1; i <= num; i++)
//     {
//         while (num != 0)
//         {
//             int r = num % 10;
//             sum = sum + r;
//             num = num / 10;
//         }
//     }
//     printf("Sum = %d\n",sum);
//     int csum=sum;
     
//     for (int i = 1; i <= sum; i++)
//     {
//         while (sum!= 0)
//         {
//             int r = sum % 10;
//             rev = rev*10 + r;
//             sum = sum/ 10;
//         }
//     }
//     printf("Reverse = %d\n",rev);
//     int n2=rev;

//     mul=csum*n2;
//     printf("Product of sum & reverse = %d\n",mul);
//     // int n3=mul;
//     if(mul==cnum)
//     {
//         printf("It's a magic number\n");
//     }
//     else
//     {
//         printf("Not a magic number");
//     }
  
// }

#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    int cnum=num;
    while(num!=0)
    {
        int r = num%10;
        int a=1;
        for(int i=r;i>0;i--)
        {
            a=a*i;
        }
        num=num/10;
        sum=sum+a;
    }
    if (sum==cnum)
    {
        printf("Number is krishnamurty number");
    }
    else
    {
        printf("Not a krishnamurty number");
    }
}