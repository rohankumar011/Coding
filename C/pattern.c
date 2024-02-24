// wap a program to print this pattern //

// *****
// ****
// ***
// **
// *
// **
// ***
// ****
// *****

// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for(i=5;i>=1;i--)
//     {
//         for(j=i;j>=1;j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i=3;i<=6;i++)
//     {
//         for(j=2;j<=i;j++)
//         {
//             printf("*");
//         } 
//         printf("\n");
//     }  
//     return 0;
// }
////////////////////////////////////////////
// wap a program print this pattern
// 1
// 12
// 123
// 1234
// 12345
//////////////////////////
// #include<stdio.h>
// int main ()
// {
//     int i,j , rows;
//     printf("enter the no of rows:");
//     scanf("%d",&rows);
//     for(i=1;i<=rows;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;

// }
// ////////////////////////////////
// wap a program to print the given pattern  //
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// ////////////////////////////////////
// #include<stdio.h>
// int main ()
// {
//     int i,j, num =1 ;
//     for (i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%d ",num++);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// //////////////////////
// WAP A PROGRAM TO PRINT THE GIVEN PATTERN //
// 15 14 13 12 11 
// 10 9 8 7 
// 6 5 4
// 3 2
// 1
// //////////////////////////////////////////
// #include<stdio.h>
// int main ()
// {
//    int i , j ,num=15 ;
//    for(i=5;i>=1;i--)
//     {
//         for(j=i;j>=1;j--)
//         {
//             printf("%d ",num--);
//         }
//         printf("\n");
//     }
// }
// ///////////////////////////////
// WAP A PROGRAM TO PRINT THE GIVEN PATTERN ///
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// ////////////////////////////////
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//            printf("*");
//         }
//         printf("\n");
//     }
//     for(i=4;i>=1;i--)
//     {
//         for(j=i;j>=1;j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=i;j<=5;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// ////////////////////////////////////////////
// WAP A PROGRAM TO PRINT THE GIVEN PATTERN //
// * * * * * 
// *
// *
// *
// * * * * *
// *
// * 
// *
// *
// * * * * *
// //////////////////////////////////////
//  #include<stdio.h>
// int main ()
// {
//     for(int i=1;i<=10;i++){
//         printf("* ");
//         if(i==1||i==5||i==10){
//             for(int j=1; j<=4; j++){
//                 printf("* ");
//             }
//         }
//         printf("\n");
//             }
// }
// /////////////////////////////////
// WAP A PROGRAM TO PRINT THE GIVEN PATTERN //
// * * * * * *
// *
// *
// *
// * * * * *
// *
// *
// *
// *
// *
// ///////////////////////////
// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for(i=1;i<=10;i++)
//    {
//     if(i==1){
//     for(j=1;j<=5;j++)
//     {
//         printf("* ");
//     }
//     }
//     else if(i==5)
//     for(j=1;j<=4;j++)
//     {
//         printf("* ");
//     }
//     printf("*\n");
//    } 
// }
//////////////////////////////////////////////////
// WAP  TO PRINT THE GIVEN PATTERN  //
//     *    
//    ***
//   *****
//  *******
// *********
// ///////////////////////////////////////////
// #include<stdio.h>
// int main ()
// {
//     int i, j;
//     for (i=1;i<=5;i++)
//     {
//         for (j=1;j<=9;j++)
//         {
//             if(j>=6-i && j<= 4+i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }

// }
///////////////////////////////////////////
// WAP  TO PRINT THE GIVEN PATTERN //
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
//////////////////////////////////////////////////
// #include<stdio.h>
// int main ()
// {
//     int i, j;
//     for (i=1;i<=5;i++)
//     {
//         for (j=1;j<=5;j++)
//         {
//             if(j>=6-i)
                
//             printf("* ");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }

// }
// ///////////////////////////////
//   WAP  TO PRINT THE GIVEN PATTERN //
// *********
// **** ****
// ***   ***
// **     **
// *       *
// //////////////////////////////////////////////
// #include<stdio.h>
// int main ()
// {
//     int i, j;
//     for (i=1;i<=5;i++)
//     {
//         for(j=1;j<=9;j++)
//         {
//             if(j<=6-i || j>=4+i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }
//WAP A PROGRAM TO PRINT THE GIVEN PATTERN //////////
//    1   
//   121
//  12321
// 1234321
/////////////////////////////////////////////////
// #include<stdio.h>
// int main ()
// {
//     int i,j,num ;
//     for (i=1;i<=4;i++)
//     {    num =1 ;
//         for(j=1;j<=7;j++)
//         {
//             if(j>=5-i && j<=3+i)
//            { printf("%d",num);
//             j<4?num++:num--;
//            } 
//            else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }
// //////////////////////////////////////////
// WAP A PROGRAM TO PRINT THE GIVRN PATTERN //
// ABCDCBA
// ABC CBA
// AB   BA
// A     A
// ///////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//     int i,j ;
//     char k;
//     for(i=1;i<=4;i++)
    
//     {   k='A';
//         for(j=1;j<=7;j++){
//         if(j<=5-i || j>=3+i){
//         printf("%c",k);
//         j<4?k++:k--;
//        }
//        else{
//        printf(" ");
//        if (j==4)
//         k--;
//        }
//          } printf("\n");
        
//     }
// }
// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for(i=1;i<=7;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(j>=1 && j>=5)
//             printf("*");
//             else if (i=4)
//             {
//                 for(j=2;j>=2;j++)
//                 printf("*");

//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
//////////////////////////////////
// WAP A PROGRAM TO PRINT THE GIVEN PATTERN //
// *   *
// *   *
// *   *
// *****
// *   *
// *   *
// *   *
// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for(i=1;i<=7;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(i==4||j==5||j==1)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }
////////////////////////////////////////////////////
// WAP A PROGRAM TO PRINT THE GIVEN PATTERN //
// *****
//   *
//   *
//   *
//   *
//   *
// *****
///////////////////////////////////////
// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for(i=1;i<=7;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(i==1||i==7||j==3)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }
/////////////////////////////////////////////
// WAP TO PRINT THE GIVEN PATTERN //
// *   *
//  * *
//   *
//  * *
// *   *
////////////////////////////////////////////

// #include<stdio.h>
// int main ()
// {
//     int i,j ;
//     int a=1;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(j==i||j==6-i)
//             printf("*");
//             else
//             printf(" ");
//         }
    
//         printf("\n");
//     }
// }
// WAP TO PRINT THE GIVEN PATTERN //
//      *     
//     * *
//    *   *
//   *******
//  *       *
// *         *
/////////////////////////////////////
// #include<stdio.h>
// int main ()
// {
//     int i,j ;
//     for(i=1;i<=6;i++)
//     {
//         for (j=1;j<=11;j++)
//         {
//             if (j==7-i||j==5+i)
//             printf("*");
//             else if(i==4&& (j==4 || j==6 || j==7 ||j==8 ||j==5))
//             printf("*");
//             else 
//             printf(" ");
//         }
        
//         printf("\n");
//     } 
     
    
// }
//WAP TO PRINT THE GIVEN PATTERN//
// *       *
//  *     *
//   *   *
//    * *
//     *
//     *
//     *
//     *
///////////////////////////////////
// #include<stdio.h>
// int main ()
// {
//     int i,j ;
//     for(i=1;i<=9;i++)
//     {
//         for (j=1;j<=9;j++)
//         {
//             if (j==i||j==10-i)
//             printf("*");
          
//             else 
//             printf(" ");
//         }
//         if(i==5)
//         break;
     
       
//         printf("\n");
//     } 
//     printf("\n");
//     for (int i=1; i<4; i++) {
//         for (int j=1; j<9; j++) {
//             if (j==(9/2+1)) {
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }   
// }
/////////////////////////////////////
//WAP TO PRINT THE GIVEN PATTERN//
//   * * * * * *
//  *
// *
// *
//  *
//   * * * * * *
////////////////////////////////////
// #include<stdio.h>
// int main()
// {
    
//     for (int i=1; i<=6; i++) {
        
//         for (int j=1; j<=8; j++) {
//             if (j==4-i||j==i-3||i==1&&(j==4||j==5||j==6)||i==6 && (j==4||j==5||j==6))
//             printf("* ");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }