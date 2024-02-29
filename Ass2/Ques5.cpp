#include<iostream>
using namespace std;
class Info{
    public:
    int stId;
    string name;
    int sem;
    string branch;
    void studentinput()
    {
    cout<<"Enter the id"<<endl;
    cin>>stId;
    cout<<"Enter the name"<<endl;
    cin>>name;
    cout<<"Enter tha sem"<<endl;
    cin>>sem;
    cout<<"Enter the branch"<<endl;
    cin>>branch;
    }
    void studentoutput()
    {
        cout<<"Full Information of Student "<<endl;
        cout<<stId<<endl;
        cout<<name<<endl;
        cout<<sem<<endl;
        cout<<branch<<endl;
    }
};
int main()
{
    Info Student;
    Student.studentinput();
    Student.studentoutput();
}