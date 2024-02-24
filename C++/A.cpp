#include <iostream>
// #pragma pack(1)
using namespace std;
// namespace A
// {
//     void func()
//     {
//         cout << "inside namespace A" << endl;
//     }
//     namespace B
//     {
//         void func()
//         {
//             cout << "inside namespace B" << endl;
//         }
//     }
// }



// struct s{
   
//     char c1[21];
//     int x;
// };



class A{
    public:
    int x,y;
    void show(){
        cout << "enter two numbers :";
        cin >> x >> y;
        cout << "sum is :" << x + y;
    }
};

int main()
{
  
    // A::B::func();
    // A::func();

    // s a;
    // cout << sizeof(a);

    A obj;
    obj.show();
    return 0;
}


