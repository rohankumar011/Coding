#include<iostream>
using namespace std;

void exchange(int size, int arr[])
{
    for(int i=0;i<size-1;i++)
    {
       for(int j=i+1;j<size;j++)
       {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
       }
    }
}
 int main()
 {
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element of the aaray:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    exchange(size ,arr);
    cout<<"after arrenging:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }

 }



