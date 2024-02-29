#include<iostream>
using namespace std;
class calculation{
    private:
    int num1 ,num2;
    public:
    void setnum()
    {
        cout<<"Enter the value of num1 "<<endl;
        cin>>num1;
        cout<<"Enter the value of num2 "<<endl;
        cin>>num2;

    }
    void addition()
    {
        cout<<"Addition of two number is :"<<num1+num2<<endl;
    }
        void Subtraction()
    {
        cout<<"Subtraction of two number is :"<<num1-num2<<endl;
    }
        void multipliucation()
    {
        cout<<"Multiplication of two number is :"<<num1*num2<<endl;
    }
};

int main()
{
    calculation Opn;
    Opn.setnum();
    Opn.addition();
    Opn.multipliucation();
    Opn.Subtraction();
}