// WAP TO PUSH ELEMENT IN STACK //
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int num, top = -1, ele;
//     printf("enter the size of the stack: ");
//     scanf("%d", &num);
//     int stack[num];
//     int choice = 1;
//     void push();
//     {
//         while (choice)
//         {

//             if (top == num - 1)
//             {
//                 printf("Stack is overflow");
//             }
//             else
//             {
//                 printf("\n Enter the element to be pushed:");
//                 scanf("%d", &ele);
//                 top = top + 1;
//                 stack[top] = ele;
//             }
//             printf("\n Do you want to continue for yes enter 1 and for no enter 0: ");
//             scanf("%d", &choice);
//         }
//     }
// }
// WAP TO POP ELEMENT FROM THE STACK //
// #include<stdio.h>
// int main ()
// {
//     int num,top=-1,ele;
//     printf("Enter the size of the stack: ");
//     scanf("%d",&num);
//     int stack[num];
//     void pop();
//     {
//        if(top==-1)
//        {
//         printf("Stack is underflow");
//        }
//        else
//        {
//          ele=stack[top];
//          printf("deleted element is %d",ele);
//          top=top-1;
//        }
//     }
// }
// WAP TO DISPLAY THE STACK //
// void display()
// {
//     int top,stack[10];
//    if( top==-1)
//    {
//     printf("Stack is empty ");
//    }
//    else
//    {
//     for(int i=top;i>=0;i--)
//     {
//         printf("%d\n",stack[i])
//     }
//    }
// }
// WAP TO PUSH AN ELEMENT IN A  STACK USING LINK LIST  //
// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data ;
//     struct node *next ;
// };
// struct node *top=NULL;
// void push()
// {
//     struct node *temp;
//     temp =(struct node*)malloc(sizeof(struct node));
//     printf("enter the data to be pushed");
//     scanf("%d",temp->data);
//     temp->next=NULL;
//     if(top==NULL)
//     {
//         top=temp;
//     }
//     else
//     {
//         temp->next=top;
//         top=temp;
//     }
// }
#include<stdio.h>
#include<stdlib.h>
struct node 
{
   int data ;
   struct node *next ;
};
struct node *top = NULL;
void pop()
{
   struct node *temp;
   if(top==NULL)
   {
      printf("Stack is empty");
   } 
   else
   {
      temp=top;
      printf("Deleted element is %d",temp->data);
      top=top->next;
      free(temp);
   }
}
