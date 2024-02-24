// write a program to find the sum of all entered array also even and odd sum///
///////////////////////////////////////
// #include<stdio.h>
// int main ()
// {
//     int i,sum=0,size,sum1=0,sum2=0;
//     printf("Enter the no of elements you want in array:");
//     scanf("%d",&size);
//     int a[size];
//     for (i=0;i<size;i++)
//     {   printf("Enter the number %d :",i+1);
//         scanf("%d",&a[i]);
//         sum=sum+a[i];
//     }
//     for(i=0;i<size;i++)
//     {

//      if (a[i]%2==0)
//      {
//         sum1=sum1+a[i];

//      }
//      else
//      {
//         sum2=sum2+a[i];

//      }

//     }
//     printf("Sum of the elements are: %d\n",sum);
//     printf("Sum of even elements are: %d\n",sum1);
//     printf("Sum of odd elements are: %d",sum2);
// }
////////////////////////////////////////////
// WAP TO ENTER THE ELEMENT OF  AN ARRAY AND SEARCH AN ELEMENTS IN IT ///
////////////////////
// #include<stdio.h>
// int main()
// {
//     int i,n,a[10],search, num=0;
//     printf("Enter the no of elements which you want to insert: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);

//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d  " ,a[i]);
//     }
//     printf("enter the number which you want to search :");
//     scanf("%d",&search);
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==search)
//        { printf("number found :");
//         num=1;
//         break;
//        }
//     }
//     if(num==0)
//    { printf("number not found ");}
//    return 0;
// }
//////////////////////////////////////
// WAP  TO ENTER THE ELEMENT OF  AN ARRAY AND FIND THE AVERAGE OF THAT ARRAY //

//  #include<stdio.h>
// int main()
// {
//     int i,num,sum=0, a[20];
//     double average;
//     printf("enter the number of element :");
//     scanf("%d",&num);
//     for(i=0;i<num;i++)
//     {
//         printf("enter the number %d :",i+1);
//         scanf("%d",&a[i]);

//          sum=sum+a[i];
//     }
//        printf("sum is %d\n ",sum);
//        average=sum/num;
//         printf("average of the array is %.2f",average);
// return 0;
//  }
//////////////////////////////////////////////////////
// WRITE A PROGRAM TO ENTER THE ELEMENT OF AN ARRAY AND AFTER THAT INSERT AN ANOTHER ELEMENT INSIDE THE ARRAY //
/////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//   int i,num ,element,position;
//   printf("enter the no of elements which you want to give in array:");
//   scanf("%d",&num);
//   int a[num];
//   for(i=0;i<num;i++)
//   {
//     scanf("%d",&a[i]);
//   }
//   for(i=0;i<num;i++)
//   {
//     printf("%d  ",a[i]);
//   }
//   printf("\nenter the number which you want to insert :");
//   scanf("%d",&element);
//   printf("enter the position where you want to inser the array :");
//   scanf("%d",&position);
//   position--;
//   for(i=num;i>position;i--)
//   {
//     a[i]=a[i-1];
//   }
//   num++;
//   a[i]=element;
//    printf("After inserting the element the array will be :");
//   for(i=0;i<num;i++)
//   {
//     printf(" %d ",a[i]);
//   }
//  return o;
// }
// #include<stdio.h>
//  int main ()
//  {
//     int i,j,arr[2][7];
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<7;j++)
//         {
//             printf("enter the temperature of city %d of day %d :" ,i+1,j+1);
//             scanf("%d",&arr[i][j]);
//         }printf("\n");
//     }
//     printf("displaying the values \n\n:");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<7;j++)
//         {
//             printf("temperature of city %d of day %d is : %d\n",i+1,j+1,arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
//  }
/////////////////////////////////////////////////////
// WAP TO PRINT THE SUM OF TWO CROSS TWO MATRIX //
////////////////////////////////////////////////
// #include<stdio.h>
// int main ()
// {
//     float a[2][2]  , b[2][2] , result[2][2] ;
//     int i,j;
//     printf("Enter the element of first matrix:\n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("enter a%d%d :", i+1,j+1);
//             scanf("%f",&a[i][j]);

//         }
//         printf("\n");
//     }
//     printf("enter the element of b matrix:\n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("enter b%d%d :", i+1,j+1);
//             scanf("%f",&b[i][j]);

//         }
//         printf("\n");
//     }

//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//            result[i][j]=a[i][j] + b[i][j];
//         }
//     }
//     printf("\n sum of the matrix is : \n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//              printf("%.1f\t",result[i][j]);
//              if(j==1)
//              printf("\n");
//         }

//     }
//     return 0;
// }
///////////////////////////////////////////////
// WAP TO PRINT THE SUM OF N CROSS N MATRIX //
////////////////////////////////////////////////
//  #include<stdio.h>
// int main ()
// {

//     int i,j,num ;

//     printf("enter the value of cross you want to find the sum :");
//     scanf("%d",&num);
//     int a[num][num]  , b[num][num] , result[num][num] ;
//     printf("Enter the element of first matrix:\n");
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num;j++)
//         {
//             printf("enter a%d%d :", i+1,j+1);
//             scanf("%d",&a[i][j]);

//         }
//         printf("\n");
//     }
//     printf("enter the element of b matrix:\n");
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num;j++)
//         {
//             printf("enter b%d%d :", i+1,j+1);
//             scanf("%d",&b[i][j]);

//         }
//         printf("\n");
//     }

//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num;j++)
//         {
//            result[i][j]=a[i][j] + b[i][j];
//         }
//     }
//     printf("\n sum of the matrix is : \n");
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num;j++)
//         {
//              printf("%d\t",result[i][j]);

//         }
//        printf("\n");
//     }
//     return 0;
// }
///////////////////////////////////////////////
// WAP A PROGRAM TO ADD TWO MATRIX //
//////////////////////////////////////////
//  #include<stdio.h>
// int main ()
// {

//     int i,j,num ,num1,num2,num3;

//     printf("Enter the number of rows for first matrix :");
//     scanf("%d",&num);
//     printf("Enter the number of column for first matrix:");
//     scanf("%d",&num1);
//     printf("Enter the number of rows for second matrix :");
//     scanf("%d",&num2);
//     printf("Enter the number of column for second matrix:");
//     scanf("%d",&num3);
//     int a[num][num1]  , b[num2][num3] , result[num][num1] ;
//     if(num==num2&& num1==num3)
//     {
//      printf("Enter the element of first matrix:\n");
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num1;j++)
//         {
//             printf("Enter a%d%d :", i+1,j+1);
//             scanf("%d",&a[i][j]);

//         }
//         printf("\n");
//     }
//     printf("Enter the element of b matrix:\n");
//     for(i=0;i<num2;i++)
//     {
//         for(j=0;j<num3;j++)
//         {
//             printf("Enter b%d%d :", i+1,j+1);
//             scanf("%d",&b[i][j]);

//         }
//         printf("\n");
//     }

//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num1;j++)
//         {
//            result[i][j]=a[i][j] + b[i][j];
//         }
//     }
//     printf("\n sum of the matrix is : \n");
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num1;j++)
//         {
//              printf("%d\t",result[i][j]);

//         }
//        printf("\n");
//     }
//     }
//     else
//     printf("Rows and Column of both the matrix is not equal");
//     return 0;
// }

//////////////////////////////////////////////////
// WAP TO TRANSPOSE A MATRIX //
///////////////////////////////////////////////////
// #include<stdio.h>
// int main ()
// {

//     int i,j,num ,num1 ;

//     printf("Enter the number of rows for first matrix :");
//     scanf("%d",&num);
//     printf("Enter the number of column for first matrix:");
//     scanf("%d",&num1);

//     int a[num][num1]  ;

//      printf("Enter the element of the matrix:\n");
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num1;j++)
//         {
//             printf("Enter a%d%d :", i+1,j+1);
//             scanf("%d",&a[i][j]);

//         }
//         printf("\n");
//     }
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num1;j++)
//         {
//             a[i][j]==a[j][i];
//         }
//     }
//     printf("transpose of the matrix is :\n");
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num1;j++)
//          {
//             printf("%d\t",a[j][i]);
//          }
//          printf("\n");
//     }

// }
//////////////////////////////////////////////////
// WAP A PROGRAM TO TRANSPOSE THE MATRIX AND FIND IT WEATHER IT IS SYMMETRIC OR NOT //
//////////////////////////////////////////////////

// #include<stdio.h>
// int main ()
// {

//     int i,j,num ,num1,temp ;

//     printf("Enter the number of rows for first matrix :");
//     scanf("%d",&num);
//     printf("Enter the number of column for first matrix:");
//     scanf("%d",&num1);

//     int a[num][num1]  ;

//      printf("Enter the element of the matrix:\n");
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num1;j++)
//         {
//             printf("Enter a%d%d :", i+1,j+1);
//             scanf("%d",&a[i][j]);

//         }
//         printf("\n");
//     }
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num1;j++)
//         {
//             a[j][i]==a[i][j];
//         }
//     }
//     printf("transpose of the matrix is :\n");
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num1;j++)
//          {
//             printf("%d\t",a[j][i]);
//          }
//          printf("\n");
//     }
//     for(i=0;i<num;i++)
//     {
//         for(j=0;j<num1;j++)
//         {
//             if(a[i][j]==a[j][i]){
//             temp = 1;
//             }
//             else
//             {
//             printf("matrix is not symmetric");
//             temp = 0;
//             break;
//             }

//         }

//     }
//     if (temp==1)
//     printf("matrix is symmetric");
// }
//////////////////////////////////////////////////////////////
// WAP to delete an element fron the given array using searching the element //
/////////////////////////////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//   int i, pos=0,num,elem;
//   printf("enter the no of elements which you want to give in array:");
//   scanf("%d",&num);
//   int a[num];
//   for(int i=0;i<num;i++)
//   {
//     scanf("%d",&a[i]);
//   }

//   for(int i=0;i<num;i++)
//   {
//     printf("%d  ",a[i]);
//   }
//   printf("enter the element which you want to delete:");
//   scanf("%d",&elem);
//   for(i=0;i<num;i++)
//   {
//   if(a[i]==elem)
//   {
//     pos=i ;
//   } 
//   else
//   continue;
//   }
//   for(int i=pos;i<num-1;i++)
//   {
//   a[i]=a[i+1];
//   }
//   num--;
//   for(int i=0;i<num;i++)
//   {
//     printf("%d  ",a[i]);
//   }
//   return 0;
// }
///////////////////////////////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//     int i,j,a[100],b[100],c[100],num1,num2,num3;
//     printf("enter the size of first set:");
//     scanf("%d",&num1);
//     printf("enter the element of first set:\n");
//     for(i=0;i<num1;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("enter the size of second set:");
//     scanf("%d",&num2);
//     printf("enter the element of second set:\n");
//     for(j=0;j<num2;j++)
//     {
//         scanf("%d",&b[j]);
//     }
//     for(i=0;i<num1;i++)
//     {
//       for(j=0;j<num2;j++)
//       {
//         if(a[i]==b[j])
//         {
//           break;
//         }
//       }

//     }
// }
// #include <stdio.h>

// int main()
// {
//     int a[100],b[100],u[100],c[100],sym[100],i,j,r,h,m,t,g=0,k=0,l;
//     printf("enter the length of array A : ");
//     scanf("%d",&r);

//     for(i=0; i<r; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("array A : ");
//     for(i=0; i<r; i++)
//     {
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
//     printf("enter the length of array B : ");
//     scanf("%d",&t);
//     for(j=0; j<t; j++)
//     {
//         scanf("%d",&b[j]);
//     }

//     printf("array B : ");
//     for(j=0; j<t; j++)
//     {
//         printf("%d\t",b[j]);
//     }
//     printf("\n");
//     /* logic to find A-B */

//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<t; j++)
//         {

//             if(b[j]==a[i])
//             {
//                 break;
//             }
//         }
//         if (j==t)
//         {
//             for(l=0; l<k; l++)
//             {
//                 if(u[l]==a[i])
//                     break;
//             }

//             if(l==k)
//             {
//                 u[k]=a[i];
//                 k++;
//             }

//         }
//     }
//     printf("A-B : ");
//     for(i=0; i<k; i++)
//     {
//         printf("%d ",u[i]);
//     }
//     printf("\n");
//     /* logic to find B-A */
//     for(i=0; i<t; i++)
//     {
//         for(j=0; j<r; j++)
//         {

//             if(a[j]==b[i])
//             {
//                 break;
//             }
//         }
//         if (j==r)
//         {
//             for(m=0; m<g; m++)
//             {
//                 if(c[m]==b[i])
//                     break;
//             }

//             if(m==g)
//             {
//                 c[g]=b[i];
//                 g++;
//             }

//         }
//     }
//     printf("B-A : ");
//     for(i=0; i<g; i++)
//     {
//         printf("%d ",c[i]);
//     }

//     for(i=0; i<k; i++)
//     {
//         sym[i]=u[i];
//     }
//     for(i=0; i<g; i++)
//     {
//         sym[i+k]=c[i];
//     }
// }
//WAP TO SWAP AN ARRAY //
// #include <stdio.h>
// int main()
// {
//   int i, num,k;
//   printf("enter the no of elements which you want to give in array:");
//   scanf("%d", &num);
//   k=num;
//   int a[num];
//   for (i = 0; i < num; i++)
//   {
//     scanf("%d", &a[i]);
//   }
//   for(int i=0;i<=k/2;i++)
//   {
//     int temp=a[i];
//     a[i]=a[k-1];
//     a[k-1]=temp;  
//     k--;
//   }
//    for (i = 0; i < num; i++)
//   {
//     printf("%d", a[i]);
//   }

//   return 0;
// }
#include<stdio.h>
int main()
{
    int i,j,a[2][2],b[2][2],c[2][2],num,num1;
    printf("enter the no of elements for first matrix");
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
     printf("enter the no of elements for second matrix");
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
     for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            c[i][j]=(a[i][j]*b[i][j]) + (a[i][j+1]*b[i+1][j]);
        }
    }
    printf("product of two matrix is ");
     for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    
}
