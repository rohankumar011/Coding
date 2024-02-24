#include<iostream>
using namespace std;

void fun(int *arr,int size){

    int temp[size];
    int k  = 0;

    for(int i = 0;i<size;i++){

        if(arr[i]>=0){
            temp[k] = arr[i];  
            k++;
        }

    }

    for(int i = k;i<size;i++){
        if(arr[i]<0){
            temp[k] = arr[i];
            k++;
        }
    }

    for(int i= 0,j=0;i<size;i++,j++){
        arr[i] = temp[j];
    }
}

int main(){

    int size;
    cout << "size: ";
    cin >> size;
    cout << "Enter array elements";
    int *arr = new int[size];
    for(int i = 0;i<size;i++){
        cin >> arr[i];

    }

    cout << "before arra is :" << endl;
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }

    fun(arr,size);

    cout << "after arra is :" << endl;
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }



}
