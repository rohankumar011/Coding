// progran for hello rohan//
// #include<stdio.h>
// int main(){
//     printf("Hello Rohan");
//     return 0;
// }
// /////////////////////////////////////////////////////  //
// Write a program to find the total marks obtain in 5 subject and it's percentage //
// #include<stdio.h>
// int main()
// {
//     int a1,a2,a3,a4,a5,s,p;
//     printf("enter the marks of physics:");
//     scanf("%d",&a1);
//     printf("enter the marks of chemistry:");
//     scanf("%d",&a2); 
//     printf("enter the marks of maths:");
//     scanf("%d",&a3); 
//     printf("enter the marks of hindi:");
//     scanf("%d",&a4); 
//     printf("enter the marks of english:");
//     scanf("%d",&a5);
//     s = a1+a2+a3+a4+a5;
//     printf("total marks obtain: %d\n",s);
//     p = (s*100)/500;
//     printf("percentage obtain in sem 1 : %d",p);
//     return 0 ;
// }  
// /////////////////////////////////////////////////  //
// write a program to find the area of square 
// #include<stdio.h>
// int main(){
//     int s,a ;
//     printf("side of square:");
//     scanf("%d",&s);
//     a = s*s;
//     printf("area of square: %d",a);
//     return 0;
// }
// ///////////////////////////////////////////  //
//
// #include<stdio.h.>
// int main(){
//     int a;
//     printf("Enter any number: ");
//     scanf("%d",&a);
//     if (a%2!=0)
//     {
//         printf("%d is odd\n",a);
//         // printf("%d\n",a+2);
//         if(a>5){
//         printf("%d",a+1);
//         }
//         else{
//         printf("%d",a-1);
//         }
        

//     }
//     else{
//         printf("%d is even\n",a);
//         // printf("%d\n",a-2);
//         if(a>5){
//         printf("%d",a+2);
//         }
//         else{
//         printf("%d",a-1);
//         }
//     }
//     return 0;
// }
    
    // printf("%d \n",a--);
    // printf("%d \n",a);
    // printf("%d ",--a);

    // printf("%d\n",++a);
    // printf("%d",a);
    // for(int i=0;i<=a;i++){
    //     // printf("%d  ",i)
    //     printf("%d\n",i);

    // }


// return 0;
// }
////////////////////////////////
// #include<stdio.h>
// int main(){ 
//     int i;
//     for(i=1;i<=5;i++){
//         printf("hello world\n");
//     }
    
    
// }
// /////////////////////////
// #include<stdio.h>

// int main(){
    // int i=10;
    // while(i>=1){
    //     printf("%d\n",i);
    //     i--;
    // int i=1;
    // do{
    //     printf("%d \n",i);
    //     i++;

    // }while(i<=10);

// Write  a program to print table of a number.

    // int a;
    // printf("Enter the number : ");
    // scanf("%d",&a);

    // for (int i = 1; i<=10; i++){
    //     printf("%d x %d = %d \n",a,i,a*i);
    // }
//     int a;
//     printf("Enter the number : ");
//     scanf("%d",&a);

//     int i=10;
//     do{
//         printf("%d x %d = %d\n",a,i,a*i);
//         i--;
//     }while(i>=11);

//     printf("by while loop\n");
//     int j =11;
//     while(j<=10){
//         printf("%d x %d = %d \n",a,j,a*j);
//         j++;
//     }
    // int a;
    // printf("Enter a : ");
    // scanf("%d",&a);

    // for (int i = 1; i<=10; i++){
        
    //     if (i==5){
    //         continue;
    //     }else{
    //     printf("%d\n",i);
    //     }
    // }
    // do{
    //     char c;
    //     printf("Enter character : ");
    //     scanf("%c",&c);
    //     if(c=='q'){
    //         break;
    //     }else{
    //         printf("%c\n",c);
    //     }
    // }while(1);

// #include<stdio.h>

// int sum(int a, int b);
// int sum(int a, int b){
//     return a*b;
// }
// int main(){
//     int a = 5, b = 6;
//     int s = sum(a, b);
//     printf("Sum = %d",s);

//     return 0;

// #include<stdio.h>
// #include<math.h>
// int sub(int a,int b);
// int sub(int a,int b){
//     int s = a-b;
//     return s;
// }
// int main(){
//     int a ,b ;
//     printf("enter a and b value");
//     scanf("%d\n%d",&a,&b);
//     int r=sub(a,b);
//     int e=sub(a=8,b=2);
//     printf("Subtraction = %d\n",r);
//     printf("Subtraction = %d\n",e);
//     int g=pow(a,b);
//     printf("%d",g);
//     return 0;
// }
////////////////////////////////
// Program for Square Root:
//   #include<stdio.h>
//   int main()
//       {
//           int s,n;
//           double d,p,a,root;
//         //   clrscr();
//           printf("Enter a number: ");
//           scanf("%d",&s);
//           n = 1;
//           while (!(s>=n*n && s<(n+1)*n+1))
//           {
//               n++;
//           }
//           d = s-(n*n);
//           p = d/(2*n);
//           a = n+p;
//           root = a-((p*p)/(2*a));
//           printf("square root of %d is %.3f",s,root);
          
//           return 0;}
 //////////////////////////////     
    // program to swap two integers by using call by referance method.

// #include<stdio.h>
    
// void swap(int*,int*);
// void main()
// {
//     int a,b;
//     printf("enter two values");
//     scanf("%d %d",&a,&b);
    
   
//     printf("\nbefore swapping a=%d b=%d",a,b);
//      swap(&a,&b);

// }
// void swap (int *a,int *b)
// {
//     int t;
//     t=*a;
//     *a=*b;
//     *b=t;
//     printf("\nafter swapping a=%d b=%d",*a ,*b);

// }
///////////////////////////////////  ///
// program to find factorial by using recursion.

// #include<stdio.h>
// int fact(int);

//   void main(){
//   int num,f;
//   printf("enter the number to find the factorial:");
//   scanf("%d",&num);
//   f = fact(num);

// printf("factorial = %d",f);
//  }
//  int fact(int n)
//  {
//      if(n==1)
//      return 1;
//      else
//      return(n*fact(n-1));
//  }
/////////////////
//   #include<stdio.h>
//   void main()
//   {
    //   int i,j;
    //   for(i=1;i<=50;i++){
    //       for(j=1;j<=i;j++)
    //       printf("$");
    //       printf("\n");

///////////////////////////////////////
//     int a,fact=1;
//     printf("enter a'value : ");
//     scanf("%d",&a);
//     for (int i=1; i<=a; i++){
//         fact*=i;  //fact = fact*i

//     }
//     printf("%d",fact);
//   }
       
       ////////////////////////////////
// #include<stdio.h>
// void main( )
// {
// int ch; 
// float a, b, r;
// printf("1: Addition\n2: Subtraction\n3: Multiplication\n4: Division ");
// printf("\n\nEnter your choice ");
// scanf(" %d" , &ch);
// switch(ch)
// {
// case 1: printf("\nEnter two numbers");
// scanf("%f %f" , &a, &b);
// r = a + b;
// printf("sum = %f" , r);
// break;
// case 2: printf("\nEnter two numbers");
// scanf("%f %f" , &a, &b);
// r = a - b;
// printf("Differance = %f" , r);
// break;
// case 3: printf("\nEnter two numbers");
// scanf("%f %f" , &a, &b);
// r = a * b;
// printf("multiplication= %f ", r);
// break;
// case 4: printf("\nEnter two numbers");
// scanf("%f %f" , &a, &b);
// r = a / b;
// printf(" Division= %f ", r);
// break;
// default: printf(" You have pressed wrong key ");
// }

// }
// #include<stdio.h>
// int main()
// {
//     int a ;
//     printf("enter the year :");
//     scanf("%d",&a);
//     if(a%4==0 && a%400==0 || a%100!=0)
//     {
//     printf("%d is leap year",a);

//     }
//     else {
//         printf("%d is not a leap year",a);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main ()
// {
//     int a,osum;
//     for(a=1;a<=20;a++)
//     {
//         if (a%2==0)
//         {
//             printf("%d is even\n",a);
//         }
//         else 
//         {
//             printf("%d is odd\n",a);
//             osum=osum+a;

//         }
        
        
//     }  
//     printf("sum of all odd no is %d",osum); 

// }

#include<stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++ ){
        scanf("%d",&arr[i]);
    }
    printf("Dispalying the array :-\n");
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    int temp, sg;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                // sg = 
            }
            else {
                continue;
            }
        }
    }
    printf("\n%d",temp);
}




    
 

