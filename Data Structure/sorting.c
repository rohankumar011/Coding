//// BUBBLE SORT ///
// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     int a[50], temp, size;
//     printf("Enter the size of array");
//     scanf("%d", &size);
//     a[size];
//     printf("Enter the element of array:");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - 1 - i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
//     printf("The sorted array is");
//     for (int i = 0; i < size; i++)
//     {

//         printf("%d ", a[i]);
//     }
// }

/// WAP  TO IMPLEMENT SORTING USING SELECTION SORT  ///
// #include<stdio.h>
// void swap(int* a,int* b);
// int main ()
// {
//     int i,j,a[50],temp,size,min;
//     printf("Enter the size of array:");
//     scanf("%d",&size);
//     a[size];
//     printf("Enter the element of array:");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<size-1;i++)
//     {
//         min=i;
//         for(j=i+1;j<size;j++)
//         {
//             if (a[j]<a[min])
//             {
//                 min=j;
//                 j--;
//             }
//         }
//         if(min!=i)
//         {
//             swap(&a[i],&a[min]);
//         }

//     }
//     printf("after sorting:");
//     for(i=0;i<size;i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;

// }
// void swap(int* a,int* b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

//// WAP TO IMPLEMENT SORTING USING INSERTION SORT /// 
// #include<stdio.h>
// void main()
// {
//     int a[50],size,element,temp,i,j;
//     printf("enter the size of array:");
//     scanf("%d",&size);
//     a[size];
//     printf("enert the element to be insert for sorting:");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&a[size]);
//     }
    
//     for( int i=1;i<size;i++)
//     {
//         temp=a[i];
//        int j=i-1;
//        while(j>=0 && a[j]>temp)
//        {
//         a[j+1]=a[j];
//         j--;
//        }
//        a[j+1]=temp;

//     }
//     printf("element after sorting:");
//     for(int j=0;j<=size;j++)
//     {
//         printf("%d",a[j+1]);
//     }

// }

// ////// WAP TO IMPLEMENT SORTING USING MERGE SORT ///// //
#include<stdio.h>
#include<stdlib.h>
 
void merge_sort(int array[],int start,int end)
{
    int size,element;
    printf("enter yhe size of array:");
    scanf("%d",&size);
    printf("enter the element to be sort:");
    for(int x=0;x<=size;x++)
    {
        scanf("%d",&array[size]);
    }
    int mid = (start+end)/2;

    if(start<end)
    {
        merge_sort(array,start,mid);
        merge_sort(array,mid+1,end);
        merge(array,start,mid,end);
    }
}
void merge(int array[],int start,int mid,int end)
{
    int temp[(end-start)+1];
    int i=start,j=mid+1,k=0,a[i],b[j];

    while(i<=mid && j<=end)
    {
        if(start<=mid)
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=a[j];
            j++;
            k++;
        }
    }
        while(i<=mid)
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        while(j<=end)
        {
            temp[k]=b[j];
            k++;
            j++;
        }
    k=0;
    for(i=start;i<=end;i++)
    {
        a[i]=temp[k];
        k++;
    }
}


/// WAP TO IMPLEMENT SORTING USING QUICK SORT //
// #include<stdio.h>
// #include<stdlib.h>
// void swap(int a ,int b);
// int size;

// int position(int a[],int lb,int ub)
// {
    
//     int pivot=a[lb];
//     int start=lb;
//     int end = ub;
//     while(start<end)
//     {
//         while(a[start]<=pivot)
//         {
//             start++;
//         }
//         while(a[end]>pivot)
//         {
//             end--;
//         }
//         if(start<end)
//         {
//             swap(a[start],a[end]);
//         }
//     }
//     swap(a[lb],a[end]);
//     return end;
// }
// void Quick_sort( int a[],int lb,int ub)
// {
//     int size ,element;
//     printf("Enter the size of the array:");
//     scanf("%d",&size);
//     a[size];
//     printf("Enter the element to be sorted :");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",&a[size]);
//     }
//     if(lb<ub)
//     {
//         int loc=position(a[size],lb,ub);
//         Quick_sort(a[size],lb,lb-1);
//         Quick_sort(a[size],lb+1,ub);
//     }

// }
// void swap(int a,int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
