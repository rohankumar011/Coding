// #include<stdio.h>
// int main()
// {
//     int a=6,b=4,c=0;
//     a>b?c=1:c=2;
//     printf("c = %d",c);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char ch = 'c';
//     printf("%d %d %d",sizeof(char),sizeof(ch),sizeof('c'));
//     return 0;
// }
// cpp => sizeof('c')
// sizeof(char)
#include<stdio.h>
struct A
{
    int a;
};

int main()
{
    A var1;
    var1.a = 10;
    printf("%d",var1.a);
    return 0;
}