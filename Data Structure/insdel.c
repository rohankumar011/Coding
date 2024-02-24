// WAP TO INSERT A NODE AT THE BEGNING OF THE LINK LIST //
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *start,*temp,*newnode;
    start=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data part:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}
*/
// WAP TO INSERT AN ELEMENT AT THE END OF THE LINK LIST //
/*
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void insertion_end()
{
    struct node *start, *temp, *t;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter the data part:");
    scanf("%d", &temp->data);
    temp->next = NULL;
    start = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        t = start;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = temp;
    }
}
*/
// WAP TO INSERT AN ELEMENT AT A SPECIFIED POSITION ///
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };
// void insrtion_specifiedpos()
// {
//     struct node *start, *temp, *t;
//     start = NULL;
//     temp = (struct node *)malloc(sizeof(struct node));
//     printf("enter the data part:");
//     scanf("%d", &temp->data);
//     temp->next = NULL;
//     int pos, i = 1, count;
//     printf("enter the position where you want to insert the element:");
//     scanf("%d", &pos);
//     if (pos > count)
//     {
//         printf("invalid position");
//     }
//     else
//     {
//         t = start;
//         while (i < pos)
//         {
//             t = t->next;
//             i++;
//         }
//     }
//     temp->next = t->next;
//     t->next = temp;
// }
// WAP TO DELETE AN ELEMENT FROM THE BEGNING IN A LINK //
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;

// };
// void deletion_beg()
// {
//     struct node *temp ,*start;
//     if (start == NULL)
//     {
//       printf("linklist is empty");
//     }
//     else
//     {
//         temp=start;
//         start=start->next;
//         free(temp);
//     }

// }
// WAP TO DELETE ELEMENT FORM END IN THE LINK LIST //
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };
// void deletion_end()
// {
//     struct node *start, *temp, *t;
//     if (start == NULL)
//     {
//         printf("linklist is empty");
//     }
//     else if (start->next == NULL)
//     {
//         temp = start;
//         prinntf("deleted element is:", temp->data);
//         free(temp);
//     }
//     else
//     {
//         temp = start;
//         while (temp->next != NULL)
//         {
//             t = temp;
//             temp = temp->next;
//         }
//         t->next = temp->next;
//         free(temp);
//     }
// }
// WAP TO DELETE AN ELEMENT FROM SPECIFIED POSITION IN LINK LIST //
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };
// void deletion_sp()
// {
//     struct node *start, *temp, *t;
//     int pos,i=0,count;
//     printf("enter the position which you want to delete:");
//     scanf("%d",pos);
//     if (pos>count)
//     {
//         printf("invalid position");
//     }
//     else if(start==NULL)
//     {
//         printf("list is empty");
//     }
//     else
//     {  
//          temp=start;
//         while(i<pos-1)
//         {
//          temp= temp->next ;

//         }
//         t=temp->next;
//         temp->next=t->next;
//         free(t);

//     }
// }
// WAP TO DISPLAY A LINK LIST //
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// };
// void display()
// {
//     struct node  *start ,*disp;
//     if (start==NULL)
//     {
//         printf("linklist is empty");

//     }
//     else
//     {
//         disp=start;
//         while(disp!=NULL)
//         {
//             printf("%d",disp->data);
//             disp=disp->next;
//         }
//     }
// }