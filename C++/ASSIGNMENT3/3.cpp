#include<iostream>
using namespace std;
 class DISTANCE
 {
    public:
    int feet,inches;

    void output()
    {
        cout<<"Enter the distance 1:"<<endl;
        cin>>feet>>inches;
    }
    void display()
    {
        cout<<feet <<" " <<inches;
    }
    void add(DISTANCE ob,DISTANCE ob1)
    {
        inches=(ob.inches+ob1.inches)%12;
        feet=ob.feet+ob1.feet + (ob.inches+ob1.inches)/12;
    }
    

 };
 int main()
 {
    DISTANCE ob,ob1,ob2;
    ob.output();
    ob1.output();
    ob2.add(ob,ob1);
    ob2.display();
    return 0;

 }