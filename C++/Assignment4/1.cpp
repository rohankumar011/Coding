#include<iostream>
using namespace std;
 class Area
 {
    int l,b;
    public:
        Area(int l,int b)
        {
            this->l=l;
            this->b=b;
        }
        void display()
        {
            cout<<"Area:"<<l*b<<endl;
        }

        
 };
 int main()
 {
    int l,b;
    cout<<"Enter the length:"<<endl;
    cin>>l;
    cout<<"Enter the breadth:"<<endl;
    cin>>b;
    Area ob(l,b);
    ob.display();

 }