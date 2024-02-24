// #include<stdio.h>
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
    
    
//     sum=sum+a[i];
//     }
//     printf("sum is %d\n ",sum);
//     average=sum/num;
//     printf("average of the array is %.2f",average);

// }

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
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,a[20],pos,size,ele;
//     printf("enter the size of array:");
//     scanf("%d",&size);
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);

//     }
//     for(i=0;i<size;i++)
//     {
//         printf(" %d ",a[i]);
//     }
//     size++;
//     printf("\nenter the position on which you want to insert the element :");
//     scanf("%d",&pos);
//     printf("enter the element which you want to insert :");
//     scanf("%d",&ele);
//     for(i=size;i>pos;i--)
//     {
//         a[i]=a[i-1];
//     }
//     a[i-1]=ele;
//     for(i=0;i<size;i++)
//     {
//         printf("%d  ",a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,a[20],size,num,y=0;
//     printf("enter the size of array:");
//     scanf("%d",&size);
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);

//     }
//     for(i=0;i<size;i++)
//     {
//         printf(" %d ",a[i]);
//     }
//     printf("\nenter the element which you want to search :");
//     scanf("%d",&num);
//     for(i=0;i<size;i++)
//     {
//         if(a[i]==num)
//         {
//             printf("number is found");
//             y=1;
//             break;
//         }
//     }
//     if (y==0)
//     {
//         printf("number is not found");
//     }
//     return 0;
// }    

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,a[20],pos,size;
//     printf("enter the size of array:");
//     scanf("%d",&size);
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);

//     }
//     for(i=0;i<size;i++)
//     {
//         printf(" %d ",a[i]);
//     }
//     printf("\nenter the position which you want to delete  :");
//     scanf("%d",&pos);
//     if(pos>size+1)
//     {
//         printf("deletion is not possible");
//     }
//     else
//     {
//         for(i=pos-1;i<size-1;i++)
//         {
//             a[i]=a[i+1];
//         }
//     }
//     size--;
//     printf("array after deletion is :");
//     for(i=0;i<size;i++)
//     {
//         printf("%d  ",a[i]);
//     }
//     return 0;
// }    
// #include<stdio.h>
// int main ()
// {
//     float a,c;
//     int b;
//     printf("enter the number which you want to check wheather it is natural or not:");
//     scanf("%f",&a);
//     if(a>0)
//     {
//     b=a;
//     c=a-b;
//     if(c==0)
//     {
//         printf("number is natural");
//     }
//     else
//     {
//         printf("number is not a natural number");
//     }
//     }
//     else 
//     {
//         printf("not a natural number");
//     }
// }
#include<stdio.h>
void main()
{
 int a;
 float b,c;
 printf("enter the int no. and floating no.");
 scanf("%d %f",&a,&b);
c=a+b;
printf("sum=%f",c);
}