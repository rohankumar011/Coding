#include<iostream>
using namespace std;
 class A
 {
    
    public:
    string c;
    int age;
    int pincode;

        void detail()
        {
            cout<<"Enter your name:"<<endl;
            getline(cin,c);
            cout<<"Enter your age:"<<endl;
            cin>>age;
            cout<<"Enter your pincode:"<<endl;
            cin>>pincode;
        }
    
 };
  int main()
  {
    A obj;
    obj.detail();
    return 0;
  }