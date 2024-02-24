#include<iostream>
using namespace std;
class Mobile
{
    string brand;
    int price;
    string color;
    int height;
    int weidth;
     
     public:
          Mobile(string brand ,int price,string color,int height,int width)
          {
            this->brand=brand;
            this->price=price;
            this->color=color;
            this->height=height;
            this->weidth=weidth;
          }
          void display()
          {
            cout<<"mobile detail:"
          }
}