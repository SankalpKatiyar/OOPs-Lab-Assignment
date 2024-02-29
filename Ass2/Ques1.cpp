#include<iostream>
using namespace std;
class Info{
    public:
    string name;
    int age;
    string city;
    int pincode;
    void studentinput()
    {
    cout<<"Enter the name"<<endl;
    cin>>name;
    cout<<"Enter the age"<<endl;
    cin>>age;
    cout<<"Enter tha city"<<endl;
    cin>>city;
    cout<<"Enter the pincode"<<endl;
    cin>>pincode;
    }
    void studentoutput()
    {
        cout<<"Full Information of Student "<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<city<<endl;
        cout<<pincode<<endl;
    }
};
int main()
{
    Info Student;
    Student.studentinput();
    Student.studentoutput();
}