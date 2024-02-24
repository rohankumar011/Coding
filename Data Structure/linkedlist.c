// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main()
// {
//     struct node 
//     {
//         int data;
//         struct node *next;
//     };
//     struct node *start,*newnode,*temp;
//     int choice =1;
//     start=NULL;
//     while(choice)
//     {
//         newnode =(struct node* )malloc(sizeof(struct node));
//         printf("enter the data part =");
//         scanf("%d",& newnode -> data);
//         newnode -> next=NULL;
//         if(start == NULL)
//         {
//             start = temp = newnode;
//         }
//         else
//         {
//             temp -> next=newnode;
//             temp=newnode;
//         }
//         printf("do you want to continue (0 for no ,1 for yes)?\n");
//         scanf("%d",&choice);
//     }
//     temp = start ;
//     while (temp!=NULL)
//     {
//         printf("%d->",temp->data);
//         temp=temp->next;
//     }
// }
////////////////////////////
 /// WAP to creat a node ///
//  #include<stdio.h>
//  #include<stdlib.h>
//     struct node 
//     {
//       int data ;
//       struct node *next;
//     };
//     int main()
//     {
//     struct node *start,*newnode;
//     start=NULL;
//     newnode = (struct node* )malloc(sizeof(struct node));
//     printf("enter the data part :");
//     scanf("%d",&newnode -> data);
//     printf("%d->",newnode -> data);
//     return 0;

//  } 
////////////////////////////////////////
/// WAP TO CREAT A LINK LINK LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//   int data;
//   struct node *next ;
// };
// int main()
// {
//   struct node *start , *temp, *newnode;
//   start =NULL;
//   int choice=1;
//   while(choice)
//   {  
//     newnode= (struct node*)malloc(sizeof(struct node));
//     printf("enter the data part :");
//     scanf("%d",&newnode->data);
//     newnode->next=NULL;
//     if(start==NULL)
//      {
//       start=newnode;
//       temp=newnode;
//      }
//      else
//      {
//       temp->next=newnode;
//       temp=newnode;
//      }
//      printf("do you want to continue 0 for no and 1 for yes:");
//      scanf("%d",&choice);

//   }
//   temp=start;
//   while(temp!=NULL)
//   {
//     printf("%d->",temp->data);
//     temp=temp->next;
  
//   }
//   return 0;
// }
////////////////////////////////////////////
// WAP TO INSERT A NODE AT BEGNING //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//   int data;
//   struct node *next ;
// };

// int main()
// {
//   struct node *start , *temp, *newnode;
//   start=NULL;
//   temp=(struct node*)malloc(sizeof(struct node));
//   printf("\nenter the data part which you want to inset in the begning  :");
//   scanf("%d",&temp->data);
//   temp->next=NULL;
//   if (start==NULL)
//   {
//     start=temp;
//   }
//   else
//   {
//     temp->next=start;
//     start=temp;
//   }
//   temp=start;
//   while(temp!=NULL)
//   {
//     printf("%d->",temp->data);
//     temp=temp->next;
//   }
//   return 0;
// }
////////////////////////////////////
//  WAP TO INSERT THE NODE AT THE END //
// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//   int data ;
//   struct node *next;
// };

// int main()
// {
//   struct node *start ,*temp,*t ;
//   start = NULL;
//   temp=(struct node*)malloc(sizeof(struct node));
//   printf("enter the data part:");
//   scanf("%d",&temp->data);
//   temp->next =NULL;
//   if(start==NULL)
//   {
//     start=temp;
//   }
//   else
//   {
//     t=start;
//     while(t->next!=NULL)
//     {
//        t=t->next;
//     }
//     t->next=temp;
//   }
// }
////////////////////////////////
//WAP TO INSERT A NODE AT SPECIFIED POSITION //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//   int data ;
//   struct node *next;
// };

// int main()
// {
//   struct node *start ,*temp,*t ;
//   start = NULL;
//   int i=1,pos,count=5;
//   temp=(struct node*)malloc(sizeof(struct node));
//   printf("enter the data part:");
//   scanf("%d",temp->data);
//   temp->next =NULL;
//   printf("enter the position at which you want to insert the node:");
//   scanf("%d",&pos);
//   if(pos>count)
//   {
//     printf("insertion is not possible");
//   }
//   else
//   {
//     t=start;
//     while(i<pos)
//     {
//       t=t->next;
//       i++;
//     }
//     temp->next=t->next;
//     t->next=temp;
//   }
//   return 0;
// }  
///////////////////////////////
// WAP TO DELETE A NODE FROM BEGNING//



