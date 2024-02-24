#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter an integer number:"<<endl;
    cin>>num;
    if(num%2==0)
    {
        cout<<"Number is divisible by 2"<<endl;
    }
    else{
        cout<<"Number is not divisible by two"<<endl;
    }
}