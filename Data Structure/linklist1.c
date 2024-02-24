// WAP A PROGRAM TO CREAT A NODE
/*#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next ;
    };
    struct node *start,*newnode;
    start=NULL;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the data part:");
    scanf("%d",&newnode->data);
    printf("%d->",newnode -> data);
}*/
// WAP TO CREAT A LINKLIST AND DISPLAY IT ///
/*
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *start,*newnode,*temp;
    start= NULL;
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data part:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue for yes->1 and for no -> 0: ");
        scanf("%d",&choice);
    }
    temp=start;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }

}
*/

