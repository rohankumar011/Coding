#include<iostream>
using namespace std;
 class student
 {
    public:
        int studid;
        string name;
        int sem;
        string branch;

        void detail()
        {
            cout<<"Enter the student id:"<<endl;
            cin>>studid;
            cout<<"Enter the name of student:"<<endl;
            getline(cin,name);
            cout<<"Enter the sem :"<<endl;
            cin>>sem;
            cout<<"Enter the branch:"<<endl;
            cin>>branch;
        }
 };
 int main()
 {
    student obj;
    obj.detail();
 }