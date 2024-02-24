// #include<stdio.h>
// int main(){
//     int b,h;
//     printf("Enter base and height of triangle: ");
//     scanf("%d, %d",&b,&h);
//     float a = 0.5*b*h;
//     printf("Area of triangle = %f",a);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float b,h,a;
//     printf("enter the base of trangle:\n");
//     printf("enter the length of height:");
//     scanf("%f, %f",&b,&h);
//     a=(1.0/2)*b*h;
//     printf("area of trangle is: %f",a);

    
// }
// #include<stdio.h>
// int main()
// {
//     int a,b,s,m,n;
//     printf("enter the value of a: ");
//     scanf("%d",&a);
//     printf("enter the value of b:");
//     scanf("%d",&b);
//     s = a+b ;
//     printf("sum is %d",s);
//     printf("\n enter the value of m:");
//     scanf("%d",&m);
//     n = s*m ;
//     printf("product is :%d",n);
//     return 0;

// }
// #include<stdio.h>
// int main(){
//     int a,b,q,r;
//     printf("enter the value of a: ");
//     scanf("%d",&a);
//     printf("enter the value of b:");
//     scanf("%d",&b);
//     r=a%b;
//     printf("remainder is %d\n",r);

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a ;
//     printf("enter the digit:");
//     scanf("%d",&a);
//     if(a%2!=0){
//     printf("number is odd %d",a);}
//     else{
//     printf("number is even %d",a);}
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a ,b;
//     printf("enter the number:");
//     scanf("%d",&a);
//     printf("enter the number:");
//     scanf("%d",&b);
//     for(int i = a;i<=b;i++)
//     {
//         if (i%2==0){
//             printf("%d  is even\n",i);

//         }
//         else{
//             printf("%d  is odd\n",i);
//         }

//     }


//     return 0;
// }
// ////////////////////////////////////////////////////////
// Program for Area of Triangle using Heron's Formula
// #include<stdio.h>
// #include<math.h>
// int main()
// {   
//     float a,b,c,s,area;
//     printf("enter the first side of triangle:");
//     scanf("%f",&a);
//     printf("enter the second side of triangle:");
//     scanf("%f",&b);
//     printf("enter the third side of trangle:");
//     scanf("%f",&c);
//     s=(a+b+c)/2;
//     area = sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("Area of the given Triangle is %f",area);
//     return 0;
// }

// By using power function  
// #include<stdio.h>
// #include<math.h>
// int main()
// {   
//     float a,b,c,s,area;
//     printf("enter the first side of triangle:");
//     scanf("%f",&a);
//     printf("enter the second side of triangle:");
//     scanf("%f",&b);
//     printf("enter the third side of trangle:");
//     scanf("%f",&c);
//     s=(a+b+c)/2;
//     area = pow(s*(s-a)*(s-b)*(s-c),0.5);  
//     printf("Area of the given Triangle is %f",area);
//     return 0;
// }
// //////////////////////////////////////////////////
// to find area of pentagon
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float a, area ;
//     printf("enter the side of pentagon:");
//     scanf("%f",&a);
//     area = (5/4)*a*a*tan(3*3.14/10);
//     printf("area of pentagon is %f",area);
//     return 0;
// }
// /////////////////////////////////////
// program  to find the distance between two points
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float x1,x2,y1,y2,distance;
//     printf("enter the x coordinate of point a:");
//     scanf("%f",&x1);
//     printf("enter the y coordinate of point a:");
//     scanf("%f",&x2);
//     printf("enter the x coordinate of point b:");
//     scanf("%f",&y1);
//     printf("enter the y coordinate of point b:");
//     scanf("%f",&y2);
//     distance = sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
//     printf("distance between two point is:%f",distance);

//     return 0;
// }
// //////////////////////////////////////////////
// LCM(Lowest Common Multiple) 
// #include<stdio.h>
// int main(){
//     int num1,num2,max,lcm;
//     printf("Enter the first number: ");
//     scanf("%d",&num1);
//     printf("Enter the second number: ");
//     scanf("%d",&num2);
//     max = (num1>num2)?num1:num2;
//     while (1)
//     {
//         if(max%num1==0 && max%num2==0){
//             lcm = max;
//             break;
//         }
//         max++;
//     }
//     printf("LCM of %d and %d is %d",num1,num2,lcm);
//     return 0;
// }
// // armstrong number //
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//    int i,n,temp,r,sum=0;      // 153 = 1^3+5^3+3^3;
//    printf("enter the number in term of n\n");
//    scanf("%d",&n);
//    //printf("armstrong number are:\n");
//    //for(i=1;i<=n;i++){
//     i = n;
//     while(n!=0){
//     r=n%10;
//     sum=sum + r*r*r;
//     n=n/10;
//     }
//     if(i==sum){
//         printf("%d is armstrong",i);
//     }
//     else {
//         printf("%d is  not armstrong",i);
//     }
//     return 0;
//  }
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number of element which you want to insert in the array:\n ");
//     scanf("%d",&num);
//     int a[num];
//     printf("Enter the element:");
//     for(int i=0;i<num;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("You have entered: ");
//     for(int i=0; i<num; i++){
//         printf("%d  ",a[i]);
//     }
//     int sarr[num];
//     int sum=0;
//     printf("\nAfter operation: ");
//     for(int i=0; i<num; i++){
//         if(i==0)
//             sum = a[i];
//         else    sum = a[i]+sarr[i-1];
//         sarr[i] = sum;
//     }
//     for(int i=0; i<num; i++){
//         printf("%d  ",sarr[i]);
//     }
// return 0;
// }
 #include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of element which you want to insert in the array:\n ");
    scanf("%d",&num);
    int a[num];
    printf("Enter the element:");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    

}