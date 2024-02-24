#include<stdio.h>
int main()
{
    extern void  add();
    extern void sub();
    // extern mul();
    // extern div();
    add();
    sub();
    // mul();
    // div();
    return 0;
}
#include"p1.c"
#include"p2.c"
