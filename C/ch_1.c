// variable  - variable is the name of  a memory which stores some data 

// #include<stdio.h>
// int main(){
//     int num = 20;  //we store number by the help of variable//
//     char star ='@';
//     int age =21;
//     float pi = 3.14;
//     return 0;
// }
// rules to write variable  - variables are case sensative (a ,A)
//                         - 1st character is alphabet or '_'
//                          - no comma/blank space 
//                          - no other symbols other than '_'

// ///// DATA TYPES /////////////
//  int stores 2 bite , char store 1 bite , float stores 4 bites ;
//  int is used to store integer value like 1,23, 455,;
//  float is used to store decimal value like 33.4, 455.5 ;
//  char is used to stores character such as '@','#';

// //////////////// CONSTANT ///////////
//  whose value  does not change 
//  there are three types of constant - integer constant like 1,3,45;
//                                      real constant like 1.2,34,44;
//                                       character constant such as 'a','S','#';

//////   KEYWORDS //////////////////////
//    reserved words that have special meaning to the compiler 
//    there are 32 keywords in c language 
//    we can not use keywords as a variables 

// /////////////////////////////////////////////////////////////////////////
// write a program to print a sentances ///
// #include<stdio.h>
// int main()
// {
//     printf("my name is rohan kumar");
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////
// write a program to print an integer enter by the user /////
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter a positive integer number:");
//     scanf("%d" ,&a);
//     printf("the no you entered is %d",a);
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////
// write a program to add to integer given by the user ////
// #include<stdio.h>
// int main()
// {
//     int a, b , sum ;
//     printf("enter the first number: ");
//     scanf("%d",&a);
//     printf("enter the second number :");
//     scanf("%d",&b);
//     sum = a+b ;
//     printf("the sum is %d",sum);
//     return 0;
// }
// ///////////////////////////////////////////////////////////////////////
// write a program to multiply the two floating point number ////
// #include<stdio.h>
// int main()
// {
//     float a,b,multiply;
//     printf("enter the fitst  decimal number :");
//     scanf("%f",&a);
//     printf("enter the second decimal number :");
//     scanf("%f",&b);
//     multiply = a*b ;
//     printf("the product of two number is %f", multiply);
//     return 0;
// }
// ////////////////////////////////////////////////////////////////////////
// write the program to find the ASCII value of a character enter by the user ///
// #include<stdio.h>
// int main ()
// {
//     char a ;
//     printf("enter a character : ");
//     scanf("%c",&a);
//     printf("%d",a);    
//     return 0;
// }
// //////////////////////////////////////////////////////////////////////
// write a program to find that the letter is of uppercase or lowercase ////
// #include<stdio.h>
// int main ()
// {
//     char a;
//     printf("enter the letter :");
//     scanf("%c",&a);
//     printf("ASCII value is %d\n",a);
//     if( a>=97){
//     printf("letter is lowercase");
//     }
//     else
//     {
//         printf("letter is upercase");
//     }

//     return 0;
// }
// ///////////////////////////////////////////////////////////////////////
// write a program to find the quotient and remender of two integer //
// #include<stdio.h>
// int main()
// {
//     int a , b, q ,r;
//     printf("enter the divident : ");
//     scanf("%d",&a);
//     printf("enter the diviser :");
//     scanf("%d",&b);
//     q = a/b ;
//     printf("the quotient is %d\n",q);
//     r = a%b ;
//     printf("remainder is %d",r);
//     return 0;
// }
// ///////////////////////////////////////////////////////////////////////
// write a program to find the size of int , char, float and double ////
// #include<stdio.h>
// int main ()
// {
//     int inttype;
//     float floattype;
//     char chartype;
//     double doubletype;
//     printf("%d\n",sizeof(inttype));             // we use sizeof() to find the size of int, char, float, double
//     printf("%d\n",sizeof(floattype));
//     printf("%d\n",sizeof(chartype));
//     printf("%d",sizeof(doubletype));
//     return 0;
// }
// ////////////////////////////////////////////////////////////////////////
// write a program to demonstrate the working of keyword long //
// #include<stdio.h>
// int main ()
// {
//     int a;
//     long b;
//     long long c;
//     long double d;
//     printf("%d\n",sizeof(a));
//     printf("%d\n",sizeof(b));
//     printf("%d\n",sizeof(c));
//     printf("%d",sizeof(d));
//     return 0;
// }
// /////////////////////////////////////////////////////////////////////////
// write a program to swap two number ////
// #include<stdio.h>
// int main ()
// {
//     int a, b ;
//     printf("enter the first number x = ");
//     scanf("%d",&a);
//     printf("enter the second number y = ");
//     scanf("%d",&b);
//     int c;
//     c = a ;
//     a = b ;
//     b = c ;
//     printf("after swaping first number x is %d\n",a);
//     printf("after swaping the second number y is %d",b);
    
//     return 0;
// }
// //////////////////////////////////////////////////////////////////
// 