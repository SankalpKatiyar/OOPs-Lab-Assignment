#include<iostream>
using namespace std;
class Employee{
    private:
    int Empcode;
    float basicsalary;
    float tax;
    float netsal;
    public:
    void input()
    {
        cout<<"Enter the employee code :"<<endl;
        cin>>Empcode;
        cout<<"Enter the basic salary :"<<endl;
        cin>>basicsalary;
    }
    void netsalary()
    {

        float da =1.74*basicsalary;
        float hra=0.10*basicsalary;
        float ta=500;
        if(basicsalary>50000)
        {
         tax=basicsalary*0.05;
        }
        netsal=(basicsalary+da+hra+ta)-tax;
        cout<<"The total salary :"<<netsal<<endl;
    }
    void display()
    {
        cout<<"Employee code :"<<Empcode;
        cout<<"Basic Salary :"<<basicsalary;
        cout<<"Net salary :"<<netsal;
    }
};
int main()
{
    Employee Emp;
    Emp.input();
    Emp.netsalary();
    Emp.display();
    return 0;
}