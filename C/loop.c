// hello loop //
// WAP  to calculate the sum of n natural number //
// #include<stdio.h>
// int main ()
// {
//     int num ,i,sum = 0 ;

//     printf("enter the positive number:");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++)
//     {
//         sum  = sum+i;

//     }

//     printf("sum =%d",sum);
//     return 0;

// }

//////////////////////////////////////////////  ///

// WAP to add number until user enter zero //
// #include<stdio.h>
// int main ()
// {
//     int num ,sum = 0;

//     do {
//         printf("enter the number:");
//         scanf("%d",&num);
//         sum = sum + num;
//     }
//     while (num!=0);
//     printf("sum is %d",sum);
//     return 0;
// }
// // //////////////////////////////////  ///
//   OR   //
// #include<stdio.h>
// int main ()
// {
//     int num , sum = 0 ;
//     for (int i=1; ;i++)
//     {
//         printf("enter the number :",num);
//         scanf("%d",&num);
//         if (num == 0)
//         {
//             break;
//         }
//         sum = sum + num ;
//     }
//     printf("sum is %d",sum);
//     return 0;
// }

// /////////////////////////////////////////////  ///
// WAP to calculate the sum of number (max 10 number), until the user enter negative number ///
// #include<stdio.h>
// int main ()
// {
//     int i,num, sum = 0;
//     for (i=1;i<=10;i++)
//     {
//         printf("enter the number :",i);
//         scanf("%d",&num);
//         if (num<0)
//         {
//             break;
//         }
//         sum = sum +num;
//     }
//     printf ("sum is %d",sum);
//     return 0;

// }
// /////////////////////////////////////////////////////  //
// WAP to calculate the sum of number (max 10 mumber), if the user enter any negative number
// then that number is not added //
// #include <stdio.h>
// int main()
// {
//     int i, sum = 0, number;
//     for (i = 1; i <= 10; i++)
//     {
//         printf("enter the number%d: ",i);
//         scanf("%d", &number);
//         if (number < 0)
//         {
//            break; 
//         }
//         sum = sum + number;
//     }      printf("sum is %d ",sum);
//            return 0;
// }
// /////////////////////////////////////////////////////// //
// WAP to check for armstrong number in a given range. //
// #include<stdio.h>
// #include<math.h>
// int armst(int num);
// int main(){
//     int r1,r2,a;
//     printf("Enter value of range: ");
//     scanf("%d, %d",&r1,&r2);
//     for(int i=r1; i<=r2; i++){
//         a = armst(i);
//         if(a==i)
//         printf("%d   ",a);
//     }
//     return 0;
// }
// int armst(int num){
//     int temp=num;
//     int temp1=num;
//     int c=0;
//     while(temp!=0){
//         temp = temp/10;
//         c++;
//     }
//     float sum=0;
//     float digit;
//     while (num!=0)
//     {
//         digit = num%10;
//         sum = sum+pow(digit,c);
//         num/=10;
//     }
//     if(temp1==sum){
//         return temp1;
//     }
// }
// WAP to check for strong number in a given range. //
// #include<stdio.h>
// int fact(int num);
// int strng(int n);
// int main(){
//     int r1,r2,s;
//     printf("Enter value range: ");
//     scanf("%d,%d",&r1,r2);
//     for(int i=r1;i<=r2;i++){
//         s = strng(555);
//         if(s==555){
//             printf("%d  ",s);
//         }
//     }
//     return 0;
// }
// int fact(int num){
//     int f = 1;
//     for(int i=1;i<=num;i++){
//         f = f*i;
//     }
//     return f;
// }
// int strng(int n){
//     int temp = n;
//     int digit;
//     int sum;
//     while (n!=0)
//     {
//         digit = n%10;
//         sum += fact(digit);
//         n /= 10;
// 4   }
//     if(temp==sum);
//     return sum;
// }
// WAP to check for palindrome number in a given range. //
// ///////////////////////////////////////////////////// //
// #include<stdio.h>
// int main(){
//     int n=0;
//     // for(n=9;n!=0;n--){
//     //     printf("n = %d",n--);
//     // }
//     while (n=0)
//         printf("True\n");
//     printf("False\n");
//     return 0;
// }
// WAP TO CHECK WHEATHER NUMBER IS PRIME OR NOT//

// #include<stdio.h>
// int main ()
// {
//     int i,num,prime=0;
//     printf("enter the number which you want to check wheather it is prime or not:");
//     scanf("%d",&num);
//     if(num==0 || num== 1)
//     printf("number is not prime");
//     else
//     {
//       for(i=2;i<num;i++)
//         {
//             if(num%i==0)
//             {
//              prime = 1;
//             }
//         }
    
//     }  
//     // if (prime == 1)
//     //  printf("number is not prime");
//     // else
//     // printf("number is prime");
//     (prime==1)?printf("Number is not prime"):printf("Number is prime");   
// }