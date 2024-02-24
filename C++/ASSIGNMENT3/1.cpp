#include<iostream>
using namespace std;

inline int fun(int a,int b,int c)
{
    int largest =(a>b)?(a>c?a:c):(b);
    return largest;
}
 int main()
 {
    int a,b,c;
    cout<<"Enter the three number:"<<endl;
    cin>>a>>b>>c;
    cout<<"greatest among three is :"<<fun(a,b,c);
    return 0;
 }