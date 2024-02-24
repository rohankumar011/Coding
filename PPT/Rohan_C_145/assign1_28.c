#include<stdio.h>
int main()
{
    int choice,c,d;
    float a,b ,add,sub,mul,div,modulo;
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for remainder\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter two number:");
        scanf("%f %f",&a,&b);
        add=a+b;
        printf("Sum is %f",add);
        break;
        case 2:
        printf("Enter two number:");
        scanf("%f %f",&a,&b);
        sub=(a-b);
        printf("Sub is %f",sub);
        break;
        case 3:
        printf("Enter two number:");
        scanf("%f %f",&a,&b);
        mul=a*b;
        printf("Mul is %f",mul);
        break;
        case 4:
        printf("Enter two number:");
        scanf("%f %f",&a,&b);
        div=(a/b);
        printf("Div is %f",div);
        break;
        case 5:
        printf("Enter two number:");
        scanf("%d %d",&c,&d);
        modulo=(c%d);
        printf("Remainder is %d",modulo);
        break;
        default:
        printf("Enter the valid choice:");
        

    }
    return 0;
}