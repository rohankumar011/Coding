//WAP TO INSERT AN ELEMENT  AT THE BEGNING IN A DOUBLY LINK LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next,*prev;
// };
// void insertion_bdll()
// {
//     struct node *start,*temp;
//     start=NULL;
//     temp=(struct node*)malloc(sizeof(struct node));
//     printf("enter the data part");
//     scanf("%d",&temp->data);
//     temp->next=NULL;
//     temp->prev=NULL;
//     if(start==NULL)
//     {
//         start=temp;
//     }
//     else
//     {
//         temp->next=start;
//         start->prev=temp;
//         start=temp;
//     }
// }
// WAP TO INSERT AN ELEMENT AT THE END OF THE DOUBLY LINK LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next ,*prev;
// };
// void insertion_enddll()
// {
//     struct node *start,*temp,*t;
//     start=NULL;
//     temp=(struct node*)malloc(sizeof(struct node));
//     printf("enter the data part");
//     scanf("%d",&temp->data);
//     temp->next=NULL;
//     temp->prev=NULL;
//     if(start==NULL)
//     {
//         start=temp;
//     }
//     else
//     {
//         t=start;
//         while(t->next!=NULL)
//         {
//             t=t->next;
//         }
//         t->next=temp;
//         temp->prev=t;
//     }
// }
// WAP TO INSERT AN ELEMENT AT THE SPECIFIED POSITION IN THE DOUBLY LINL LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next,*prev;
// };
// void incertion_spdll()
// {
//     struct node *start,*temp,*t;
//     int i=1,pos,count;
//     temp=(struct node*)malloc(sizeof(struct node));
//     printf("enter the data part");
//     scanf("%d",&temp->data);
//     temp->next=NULL;
//     temp->prev=NULL;
//     printf("enter the position where you want to insert the element:");
//     scanf("%d",&pos);
//     if(pos>count)
//     {
//         printf("Invalid choice");
//     }
//     else
//     {
//         t=start;
//         while(i<pos)
//         {
//             t=t->next;
//             i++;
//         }
//         temp->next=t;
//         temp->prev=t->prev;
//         t->prev->next=temp;
//         t->prev=temp;
//     }
    
// }
// WAP TO DELETE AN ELEMENT FROM BEGNING IN DOUBLY LINK LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next,*prev;
// };
// void deletion_begdoll()
// {
//     struct node *start, *temp;
//     start=NULL;
//     if(start==NULL)
//     {
//         printf("link list is empty");
//     }
//     else
//     {
//         start=start->next;
//         start->prev=NULL;
//         free(temp);
//     }
// }
// WAP TO DELETE AN ELEMENT FROM THE END OF THE DOUBLY LINK LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data ;
//     struct node *next ,*prev;
// };
// void deletion_enddoll()
// {
//    struct node *start,*temp,*t;
//    start=NULL;
//    if(start==NULL)
//    {
//     printf("link list is empty");
//    }
//       else if(start->next=NULL)
//       {
//         temp=start;
//         printf("deleted element is %d",temp->data);
//         start=NULL;
//         free(temp);
//       }
//    else
//    {
//      t=start;
//      while(t->next!=NULL)
//      {
//         t=t->next;
//      }
//      t->prev->next=NULL;
//      free(temp);
//    }
// }
// WAP TO DELETE AN ELEMENT FROM THE SPECIFIED POSITION IN DOUBLY LINK LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data ;
//     struct node *next , *prev;
// };
// void deletion_spdoll()
// {
//     struct node *start,*temp ,*t ;
//     int i=1,count ,pos;
//     start=NULL;
//     printf("enter the position which you want to delete:");
//     scanf("%d",&pos);
//     if(pos>count)
//     {
//         printf("invalid position");
//     }
//     else
//     {
//        t=start;
//        while(i<pos)
//        {
//         t=t->next;
//         i++;
//        }
//        temp=t;
//        t->prev->next=t->next;
//        t->next->prev=t->prev;
//        free(temp);
//     }

// }