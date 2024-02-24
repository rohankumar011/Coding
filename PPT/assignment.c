 #include<stdio.h>
#include<string.h>
int main()
{
    int name,month,day,year,no;
    printf("Name :");
    scanf("%d",&name);
    printf("DOB(August 15,1947) :");
    scanf("%c  %d %d",month,day,year);
    printf("Mobile : 91-");
    scanf("%d",no);
}
///////////////////
// #include<stdio.h>
// int main ()
// {
//     int a;
//     float b;
//     char c;
//     printf("integer value:");
//     scanf("%d",&a);
//     printf("float value:");
//     scanf("%f\2",&b);
//     printf("character value:");
//     scanf("%c",&c);
// }
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int name,pass,a[20],p[20],i,j;
//     char ch;
//     printf("Enter the name:");
//     scanf("%d",&name);
//     printf("Enter the password:");
//     scanf("%d",&pass);
//     return 0;

// }
/////
// #include<stdio.h>
// int main()
// {
//     int a=6,b=4,c=0;
//     a>b?c=1:(c=2);
//     printf("c = %d",c);
//     return 0;
// }
////////
// #include<stdio.h>
// int main()
// {
//     char ch = 'c';
//     printf("%d %d %d",sizeof(char),sizeof(ch),sizeof('c'));
//     return 0;
// }

// c=>
// size('c')
// sizeof(99)
// sizeof(int)
/////////////
// #include<stdio.h>
// struct A
// {
//     int a;
// };

// int main()
// {
//     struct A var1;     // it is wrong but in c++ it will run efficiently // we have to put struct before A var1 //
//     var1.a = 10;
//     printf("%d",var1.a);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("enter three number which you want to compare:");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b&& a>c)
//     printf("a is greatest");
//     else if (b>a && b>c)
// }


#include<stdio.h>
int main(){
     int a, b, c,res;
    printf("enter three number which you want to compare:");
    scanf("%d %d %d",&a,&b,&c);
    res=a>b?(a>c?a:c):(b>c?b:c);
    printf("%d",res);
}


