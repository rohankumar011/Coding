// 1 //
// #include <stdio.h>
// int main()
// {
//     int num1, num2, num3;
//     printf("middle level language");
//     asm("movl $5,%%eax;"
//         : "=a"(num1));
//     asm("movl $15, %%ebx;"
//         : "=b"(num2));
//     printf("%d +%d = %d", num1, num2, num1 + num2);
//     return 0;
// }
// 2 //
// #include<stdio.h>
// int main()
// {
//     int x,y,res;
//     // move immediate value 50 to register eax 
//     // move immediate value 20 to register ebx
//     // the added value is stored in res for output
//     __asm__ ("movl $50, %%eax;"
//            "movl $20, %%ebx;"
//            "addl %%ebx, %%eax;" : "=a"(res) );
//     printf("Add = %d",res);
//     return 0;
// }

// in c language we write as (a=5) but in asm we write it as ("movl $5, %%eax;")
// in c language we write as (a=b+a;) but in asm we write it as ("addl %%ebx, %%eax")

#include<stdio.h>
int main()
{
    printf("\"HAPPY LEARNING \"");
}