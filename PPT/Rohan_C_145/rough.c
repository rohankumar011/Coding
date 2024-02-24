// #include<stdio.h>
// int main()
// {
//      int arr[5]={11,22,33,44,55};
//      printf("%d %d\n",arr[3],*(arr+3));
//      printf("%d %d\n",arr[3],*(3+arr));
//      printf("%d %d\n",3[arr],*(3+arr));
//      return 0;
// }
// #include<stdio.h>
//  int main()
//  {
//      int arr[]={11,22,33,44,55,66,77};
//      int i;
//      for(i=0;i<10;i++){
//      printf("%d ",arr[i]);}
//      return 0;
//  }
// #include <stdio.h>
// int main()
// {
//     int sum = 0, average, even = 0, odd = 0;
//     int arr[10];
//     int i;
//     printf("Enter ten number:");
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//         sum = sum + arr[i];
//         if (arr[i] % 2 == 0)
//         {
//             even = even + 1;
//         }
//         if (arr[i] % 2 != 0)
//         {
//             odd = odd + 1;
//         }
//     }
//     int a = sum;
//     printf("Sum is %d\n", a);
//     average = sum / 10;
//     int b = average;
//     printf("Average is %d\n", average);
//     int d = even;
//     int e = odd;
//     printf("total even is %d", d);
//     printf("total no of odd is %d", e);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     float arr[10];
//     printf("Enter ten number:");
//     for(int i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int num;
//     printf("Enter the which you want to search :");
//     scanf("%d",&num);
//     int c=0;
//     for(int i=0;i<10;i++)
//     {
//         if(arr[i]==num)
//         {
//             printf("number found");
//             c=c+1;
//             break;
//         }
//     }
//     if(c==1)
//     {
//         printf("number found");
//     }
//     else
//     {
//         printf("not found");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int i = 4;
//     int n = sizeof(i++);
//     printf("i = %d  n = %d",i,n);
//     return 0;
// }
// #include<stdio.h>
//  int itscpy(char str1[],char str2[]);
//  int main()
//  {
//    char str[20] ,name[10];
//    printf("Enter the name:");
//    gets(str);
//    printf("name=%s",str);
//    peintf("Enter the name which you want to copy :");
//    gets(name);
//    return 0;
//  }
//  int itscpy(char str1[],char str2[])
//  {
//     for(int i=0;i<str1[i];i++)
//     {
//         str1[i]=str2[i];
//     }
//  }
// #include<stdio.h>
// void add();
// int main()
// {
//    add();

// }
// void add()
// {
//     int a,b,c;
//     printf("Enter two number :");
//     scanf("%d %d",&a,&b);
//     c=a+b;
//     printf("add = %d",c);

// }
// #include<stdio.h>
// int add();
// int main()
// {
//     int d=add();
//     printf(" sum is %d",d);
//     return 0;
// }
// int add()
// {
//     int a,b,c;
//     printf("Enter two number :");
//     scanf("%d %d",&a,&b);
//     c=a+b;
//     return c;
// }
// 
// #include<stdio.h>
// void its();
// static int g1,g2;
// void main()
// {
//     auto int a,b;
//     static int c,d;
//     int *p1,*p2;
//     p1=(int*)malloc(4);
//     p2=(int*)malloc(4);
//     printf("Stack seg \n");
//     printf("%u %u\n",&a,&b);
//     printf("heap seg \n");
//     printf("%u %u\n",p1,p2);
//     printf("data seg\n");
//     printf("%u %u\n",&g1,&g2);
//     printf("%u %u\n",&c,&d);
//     printf("code seg\n");
//     printf("%u %u\n",&its,main);
//     return 0;
// }
// void its()
// {
//     printf("hello its\n");
//     return 0;
// } 

// #include<stdio.h>
// int main(int argc,char *argv[])
// {
//     int a,b,c;
//     a= atoi(argv[1]);
//     b= atoi(argv[2]);
//     c=a+b;
//     printf("\n add = %d",c);
//     return 0;
// }
#include<stdio.h>
#pragma pack(1)
int main()
{
    char ch,d;
    int a,b;
    printf("Enter your id :");
    scanf("%d",&b);
    scanf("%c",&d);
    printf("enter a char:");
    scanf("%c",&ch);
    printf("enter a number :");
    scanf("%d",&a);
    return 0;

}