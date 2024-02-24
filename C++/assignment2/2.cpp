#include<iostream>
using namespace std;

class Area
{
    public:
     int length,breadth;
     int area;
      void setDim()
      {
        cout<<"Enter the length of rectangel:"<<endl;
        cin>>length;
        cout<<"Enter the breadth of rectangel:"<<endl;
        cin>>breadth;
      }
      void getArea()
      {
        
        cout<<"Area of rectangel:"<<length*breadth;
      }
};
int main()
{
    Area obj;
    obj.setDim();
    obj.getArea();
    return 0;

}