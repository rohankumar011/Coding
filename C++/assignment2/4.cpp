#include<iostream>
using namespace std;
 class circle
 {
    public :
    float r,area;
    float pi=3.14;
         void Area()
         {
            cout<<"Enter the radius of circle:"<<endl;
            cin>>r;
            cout<<"area of circle:"<<pi*r*r;
        
         }
 };
 int main()
 {
    circle obj;
    obj.Area();
    return 0;
 }