#include<iostream>
using namespace std;

class Calculation
{
    int num1,num2;
    public :
     
       void cal()
       {
        cout<<"Enter the value of num1:"<<endl;
        cin>>num1;
        cout<<"Enter the value of num2:"<<endl;
        cin>>num2;  
       }
       void add()
       {
        cout<<"Addition:"<<num1+num2<<endl;
       } 
       void sub()
       {
        cout<<"Subtraction:"<<num1-num2<<endl;
       }
       void mul()
       {        
        cout<<"Multiplication:"<<num1*num2<<endl;
       }
       void div()
       {
        cout<<"Division:"<<num1/num2<<endl;
       }      
};
int main()
{
    Calculation obj;
    obj.cal();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}