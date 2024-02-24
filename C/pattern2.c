// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for ( i=1; i<=5; i++)
//     {
//        for ( j=1; j<=9; j++)
//        {
//         if (j>=6-i && j<=4+i)
//         {
//         printf("*");
//         }
//         for ( i = 2; i<=5; i++)
//         {
//             for ( j=0; j<=9; j++)
//             {
//                 if (j>=7-i && j<=3+i)
//                 {
//                 printf("  ");
//                 }
                
//             }
            
//         }
        
//        }
       
//     }
//     return 0;
// }

#include<stdio.h>
int main() {
    // int num;
    // printf("enter a number : ");
    // scanf("%d",&num);
    for (int i=1; i<=6; i++) {
        
        for (int j=1; j<=8; j++) {
            if (j==4-i||j==i-3||i==1&&(j==4||j==5||j==6)||i==6 && (j==4||j==5||j==6))
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
}