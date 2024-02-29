#include<iostream>
using namespace std;
class Atm {
 private:
 int accNo;
 int balance;
 
 public:
 void deposite()
 {
    cout<<"Enter the account number :"<<endl;
    cin>>accNo;
    cout<<"Enter the Balance :"<<endl;
    cin>>balance;
 }
 int withdrawl(int amount)
 {
    if(amount>balance)
    {
        cout<<"!!!!!Insufficient balance ";
    }
    else{
        balance -=amount;
        return balance;
    }
 }
};

int main()
{
    
    Atm bank;
    bank.deposite();
    int withdrawlamt,Availableblnce;
    cout<<"Enter the Withdrawl amount"<<endl;
    cin>>withdrawlamt;
    Availableblnce= bank.withdrawl(withdrawlamt);
    cout<<"The available balance is :"<<Availableblnce;
    cout<<"Withdrawl amount is : "<<withdrawlamt<<endl;
}