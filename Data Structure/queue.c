// WAP FOR INSERTION , DELETION AND DISPLAYING A QUEUE USING ARRAY //
// #include<stdio.h>
// #include<stdlib.h>

// int queue[100],ele,front=-1,rear=-1,size;

// void insertion();
// void deletion();
// void disply();

// void main()
// {
//     printf("Enter the size of the queue: ");
//     scanf("%d",&size);
//     int choice;
//     while(1)
//     {
//         printf("\nEnter 1 for insertion\n");
//         printf("Enter 2 for deletion\n");
//         printf("Enter 3 for display\n");
//         printf("Enter 4 for exit\n");

//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1:
//             insertion();
//             break;
//             case 2:
//             deletion();
//             break;
//             case 3:
//             disply();
//             break;
//             case 4:
//             exit(0);
//             break;
//             default:
//             printf("Enter the valid number\n");
//         }
//     }
// }
// void insertion()
// {
//     if(rear==size-1)
//     {
//         printf("\n queue is overflow");
//     }
//     else if(front==-1)
//     {
//         front=0;
//     }
//     else
//     {
//         printf("\n Enter the element to be inserted:");
//         scanf("%d",&ele);
//         rear=rear+1;
//         queue[rear]=ele;
//     }
// }
// void deletion()
// {
//     if(front==-1||front>rear)
//     {
//         printf("\nqueue is underflow");
//     }
//     else
//     {
//         printf("\nDeleted element is %d",queue[front]);
//         front=front+1;
//     }
// }
// void disply()
// {
//     int i;
//     if(front==-1)
//     {
//         printf("\nqueue is empty");
//     }
//     else
//     {
//         printf("Queue is:");
//         for(i=front;i<=rear;i++)
//         {
//             printf("%d ,",queue[i]);
//         }
//     }
// }

// WAP TO IMPLEMENT QUEUE USING link list for insertion //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *front=NULL;
// struct node *rear=NULL;
// void main()
// {
//     struct node *temp;
//     temp=(struct node*)malloc(sizeof(struct node));
//     printf("Enter the data part:");
//     scanf("%d",&temp->data);
//     temp->next=NULL;
//     if(front==NULL||rear==NULL)
//     {
//         front=rear=temp;
//     }
//     else
//     {
//         rear->next=temp;
//         rear=rear->next;
//     }


// }
// WAP TO IMPLEMENT QUEUE USING LINK LIST FOR DELETION //
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *front=NULL;
// struct node *rear=NULL;
// void main()
// {
//     struct node *t;
//     if(front==NULL)
//     {
//         printf("Queue is empty");
//     }
//     else
//     {
//         t=front;
//         front=front->next;
//         free(t);
//     }

// }

//  WAP TO IMPLEMENT INSERTION DELETION AND DISPLAY IN QUEUE USING LINL LIST //
// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };
// void insertion_queue();
// void delition_queue();
// void display_queue();
// struct node *front=NULL;
// struct node *rear=NULL;

// void main()
// {
//     int choice;
   
//     while(1)
//     {
//         printf("\nEnter 1 for insertion: \n");
//         printf("Enter 2 for delition:\n");
//         printf("Enter 3 for display:\n");
//         printf("Enter 4 for exit:  ");

//         scanf("%d",&choice);
//         printf("\n");
//         switch(choice)
//         {
//             case 1:
//             insertion_queue();
//             break;
//             case 2:
//             delition_queue();
//             break;
//             case 3:
//             display_queue();
//             break;
//             case 4:
//             exit(0);
//             break;
//             default:
//             printf("Enter the valid number\n");
//         }
//         printf("\n\n\n");
        
//     }
// }
// void insertion_queue()
// {
//     struct node *temp;
//     temp=(struct node*)malloc(sizeof(struct node));
//     printf("Enter the data part:");
//     scanf("%d",&temp->data);
//     temp->next=NULL;
//     if(front==NULL||rear==NULL)
//     {
//         front=rear=temp;
//     }
//     else
//     {
//         rear->next=temp;
//         rear=rear->next;
//     }

// }
// void delition_queue()
// {
//     struct node *t;
//     if(front==NULL)
//     {
//         printf("Queue is empty");
//     }
//     else
//     {
//         t=front;
//         front=front->next;
//         free(t);
//     }

// }
// void display_queue()
// {
//     struct node *temp;
//     if(rear==NULL && front==NULL)
//     {
//         printf("queue is empty");
//     }
//     else
//     {
//         printf("queue is:");
//         temp=front;
//         while(temp)
//         {
//             printf("%d ",temp->data);
//             temp=temp->next;
//         }
//     }
// }
//  WAP TO IMPLEMENT INSERTION DELETION AND DISPLAY IN circular QUEUE USING ARRAY //

///// WARNING AFTER QUEUE IS FILLED AND AN ELEMENT IS DELETED AND AGAIN THE INSERTION IS DONE THE WHOLE QUEUE IS NOT DISPLAYING ONLY LAST INSERTED ELEMENT IS SHOWING //

// #include<stdio.h>
// #include<stdlib.h>

// void insertion_cqueue();
// void deletion_cqueue();
// void display_cqueue();
// int front=-1,rear=-1,n,queue[100];


// void main()
// {
//     int ele;
//     printf("enter the size of array:");
//     scanf("%d",&n);
//     queue[n];

//     int choice;

//     while(1)
//     {
//         printf("\n Enter 1 for insertion in c_queue:\n");
//         printf("Enetr 2 for deletion in c_queue:\n");
//         printf("Enter 3 for display c_queue:\n");
//         printf("Enter 4 for exit :\n");
//         scanf("%d",&choice);

//         printf("\n");
//         switch(choice)
//         {
//             case 1:
//             insertion_cqueue();
//             break;
//             case 2:
//             deletion_cqueue();
//             break;
//             case 3:
//             display_cqueue();
//             break;
//             case 4:
//             exit(0);
//             break;
//             default:
//             printf("Enter the valid number\n");
//         }
//         printf("\n\n\n");
//     }

// }
// void insertion_cqueue()
// {
//     int ele;
//     printf("Enter the element which you want to insert in cqueue:");
//     scanf("%d",&ele);
//     if(front==(rear+1)%n)
//     {
//         printf("cqueue is full");
//     }
//     else if(front==-1 && rear==-1)
//     {
//         front=rear=0;
//         queue[rear]=ele;
//     }
//     else
//     {
//         rear=(rear+1)%n;
//         queue[rear]=ele;
//     }

// }
// void deletion_cqueue()
// {
//     if(front==-1 && rear==-1)
//     {
//         printf("Queue is empty");
//     }
//     else if(front==rear)
//     {
//         printf("Deleted element is %d",queue[front]);
//         front=rear=-1;
//     }
//     else
//     {
//         printf("Deleted element is %d",queue[front]);
//         front=(front+1)%n;
//     }
// }
// void display_cqueue()
// {
//     int i=0;
//     if(front==-1&&rear==-1)
//     {
//         printf("queue is empty");
//     }
//     else
//     {
//         while(i!=rear)
//         {
//             printf("%d ",queue[i]);
//             i=(i+1)%n;

//         }
//         printf("%d",queue[i]);
//     }
// }