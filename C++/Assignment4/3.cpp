#include<iostream>
using namespace std;
class Atm
{
    int accountno;
    int balance;
    public:
        Atm(int accountno,int balance)
        {
            this->accountno=accountno;
            this->balance=balance;
        }
        void deposit()
        {
            if(this->accountno)
            {
                int dbalance;
                cout<<"Enter the balance you want to deposit:"<<endl;
                cin>>dbalance;
                this->balance=this->balance+dbalance;
                cout<<"balance after deposit:"<<this->balance;
            }
        }
        void Balance()
        {
            cout<<"Your current balance is:"<<this->balance;
        }
        void widthdraw()
        {
            int widthdrawl;
            cout<<"Enter the amount you want to widthdraw:"<<endl;
            cin>>widthdrawl;
            cout<<"Amount after widthdrawl:"<<this->balance-widthdrawl;
            this->balance=this->balance-widthdrawl;
        }
};
int main()
{
    int accountno;
    int balance;
    cout<<"Enter the accountno:"<<endl;
    cin>>accountno;
    cout<<"Enter the balance:"<<endl;
    cin>>balance;
    Atm obj(accountno,balance);

    bool choice=true;
    int num;
    while(choice)
    {
        cout<<"\n1.Deposit\n2.widthdraw\n3.balance\n4.Exit"<<endl;
        cin>>num;
        if(num==4)
        {
            break;
        }
        switch (num)
        {
        case 1:
            obj.deposit();
            break;

        case 2:
            obj.widthdraw();
            break;

        case 3:
            obj.Balance();
            break;
        
        default:
            break;
        }
    }
    


}