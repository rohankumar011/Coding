// WAP  TO INSERT A NODE AT THE BEGNING OF THE CIRCULAR LINK LIST //
//  #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void inserion_begcll()
// {
//     struct node *start,*temp,*t;
//     temp=(struct node*)malloc(sizeof(struct node));
//     printf("Enter the data part:");
//     scanf("%d",&temp->data);
//     temp->next=NULL;
//     start=NULL;
//     if(start==NULL)
//     {
//         start=temp;
//         start->next=start;
//     }
//     else{
//         t=start;
//         while(t->next!=start)
//         {
//             t=t->next;
//         }
//         temp->next=start;
//         start=temp;
//         t->next=start;
//     }

// }
// WAP TO INSERT A NODE AT THE END OF THE CIRCULAR LINK LIST //
// #include<stdio.h>.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// } ;
// void insertion_endcll()
// {
//     struct node *start,*temp,*t;
//     start=NULL;
//     temp=(struct node*)malloc(sizeof(struct node));
//     printf("enter the data part:");
//     scanf("%d",&temp->data);
//     temp->next=NULL;
//     if (start==NULL)
//     {
//         start=temp;
//         temp->next=start;
//     }
//     else
//     {
//         t=start;
//         while (t->next!=NULL)
//         {
//             t=t->next;
//         }
//         t->next=temp;
//         temp->next=start;
//     }
    
// }
// WAP TO INSERT AN ELEMET AT SPECIFIED POSITION IN CIRCULAR LINK LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void insertion_spcll()
// {
//   struct node *start,*temp,*t;
//   start=NULL;
//   temp=(struct node*)malloc(sizeof(struct node));
//   printf("enter the data part:");
//   scanf("%d",&temp->data);
//   temp->next=NULL;
//   int pos,i=0,count;
//   printf("enter the position where you want to insert the node:");
//   scanf("%d",&pos);
//   if(pos>count)
//   {
//      printf("envalid position");
//   }
//   else
//   {
//     t=start;
//     while(i<pos-1)
//     {
//         t=t->next;
//         i++;
//     }
//     temp->next=t->next;
//     t->next=temp;
//   }
// }
// WAP TO DELETE AN ELEMENT FROM THE BEGNING OF A CIRCULAR LINK LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void deletion_begcll()
// {
//     struct node *start,*t,*temp;
//     start=NULL;
//     if(start==NULL)
//     {
//         printf("linklist is empty");
//     }
//     else if(start->next=start)
//     {
//         temp=start;
//         printf("deleted element is %d",temp->data);
//         start=NULL;
//         free(temp);
//     }
//     else
//     {
//         t=start;
//         temp=start;
//         while(t->next!=start)
//         {
//             t=t->next;
//         }
//         start=temp->next;
//         t->next=start;
//         free(temp);
//     }
// }
//WAP TO DELETE AN ELEMENT FROM THE END OF THE CIRCULAR LINK LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data ;
//     struct node *next;
// };
//  void deletion_endcll()
//  {
//     struct node *start,*temp,*t;
//     start=NULL;
//     if(start==NULL)
//     {
//         printf("deletion is not possible");
//     } 
//    else if(start->next=start) 
//    { 
//     temp=start; 
//     printf("deleted element is %d",temp->data); 
//     start=NULL; 
//     free(temp); 
//    }
//     else
//     {
//         t=start;
//         while(t->next!=start)
//         {
//             temp=t;
//             t=t->next;
//         }
//         temp->next=start;
//         free(t);
//     }

//  }
// WAP TO DELETE AN ELEMENT FROM SPECIFIED POSITION IN A CIRCULAR LINK LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void deletion_spcll()
// {

//     struct node *start, *temp,*t;
//     int pos , i=1,count;
//     printf("enter the position which you want to delete:");
//     scanf("%d",&pos);
//     if(pos>count)
//     {
//         printf("invalid position");
//     }
//     else
//     {
//         t=start;
//         while(i<pos)
//         {
//             temp=t;
//             t=t->next;
//             i++;
//         }
//         temp->next=t->next;
//         free(t);
//     }
// }
