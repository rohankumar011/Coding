// #include<stdio.h>
// struct stud
// {
//     int id;
//     char name[20];
//     int marks;

// };
// int main()
// {
//     struct stud s1 = {101,"Sachin",89};
//     struct stud s2 = {102,"raj",98};
//     struct stud s3;
//     s3=s2;
//     printf("%d %s %d\n",s1.id,s1.name,s1.marks);
//     printf("%d %s %d\n",s2.id,s2.name,s2.marks);
//     printf("%d %s %d\n",s3.id,s3.name,s3.marks);
//     printf("\n Size of s3 = %d",sizeof(s3));
//     return 0;
// }



/// structure using structure //
// #include<stdio.h>
// #include<stdlib.h>
// struct date
// {
//     int DD,MM,YY;

// };
// struct stud
// {
//     int id ;
//     char name[20];
//     int marks;
//     struct date DOB;
// };
// int main()
// {
//     struct stud s1 = {101,"sachin",89,{12,03,2002}};
//     printf("%d %s %d %d-%d-%d",s1.id,s1.name,s1.marks,s1.DOB.DD,s1.DOB.MM,s1.DOB.YY);
//     return 0;
// }


/// nested structure ///
// #include<stdio.h>
// #include<stdlib.h>
// struct stud
// {
//     int id ;
//     char name[20];
//     int marks;
//     struct  {int DD,MM,YY;} DOB;
// };
// int main()
// {
//     struct stud s1 = {101,"sachin",89,{12,03,2002}};
//     printf("%d %s %d %d-%d-%d",s1.id,s1.name,s1.marks,s1.DOB.DD,s1.DOB.MM,s1.DOB.YY);
//     return 0;
// } 


/// pointer too structure //

// #include<stdio.h>
// #include<stdlib.h>
// struct stud
// {
//     int id ;
//     char name[20];
//     int marks;
// };
// int main()
// {
//     struct stud s1 = {101,"sachin",89};
//     struct stud *ptr =&s1;
//     printf("%d %s %d\n",s1.id,s1.name,s1.marks);
//     printf("%d %s %d",ptr->id,ptr->name,ptr->marks); // we use -> while using pointer 
//     return 0;
// } 


/// array of structure //
#include<stdio.h>
#include<stdlib.h>

struct stud
{
    int id;
    char name[20];
    int marks;
};
int main()
{
    struct stud s[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter ID  NAME  MARKS - ");
        scanf("%d%s%d",&s[i].id,&s[i].name,&s[i].marks);
    }
    printf("ID      NAME     MARKS \n");
    printf("==========================\n");
    for(i=0;i<3;i++)
    {
        printf("%d %-10s %d\n",s[i].id,s[i].name,s[i].marks);
    }
    return 0;
}