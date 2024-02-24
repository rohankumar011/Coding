// malloc //
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *p=NULL;
//     p=(int *)malloc(5*sizeof(int));
//     if(p==NULL)
//     {
//         printf("Memory allocation failed");
//     }
//     else
//     {
//         for(int i=0;i<5;i++)
//         {
//             *(p+i)=i+10;
//         }
//         for(int i=0;i<5;i++)
//         {
//             printf("%d at %u\n",*(p+i),(p+i));
        
//         }
       
//     }
//     return 0;
// }

// calloc //
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *p=NULL;
//     int i;
//     int n;
//     printf("Enter number of block -");
//     scanf("%d",&n);
//     p=(int *)calloc(n,sizeof(int));
//     if(p==NULL)
//     {
//         printf("Memory allocation failed !!");
//     }
//     else
//     {
//         for(i=0;i<n;i++)
//         {
//             *(p+i)=i+10;
//         }
//         for(i=0;i<n;i++)
//         {
//             printf("%d at %u\n",*(p+i),(p+i));
//         }
//     }
//     return 0;
// }

// realloc //
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *p=NULL;
//     int i;
//     p=(int *)malloc(20);
//     for(i=0;i<5;i++)
//     {
//         *(p+i)=i+10;
//     }
//     for ( i = 0; i < 5; i++)
//     {
//         printf("%d ",*(p+i));
//     }
//     p=(int *)realloc(p,40);
//     printf("\n\n After Reallocation - \n");
//     for( i = 0; i < 10; i++)
//     {
//         printf("%d \n",*(p+i));
//     }
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=NULL;
    int *ptr1=NULL;
    ptr=(int *)malloc(sizeof(int));
    *ptr=50;
    printf("data = %d \n",*ptr);
    free(ptr);
      // free is used to free the memory which is already allocated // 
    ptr=NULL;
    ptr1=(int *)malloc(sizeof(int));
    *ptr1=100;
    printf("data = %d\n",*ptr1);
    printf("%u %u",ptr,ptr1);

    return 0;
}