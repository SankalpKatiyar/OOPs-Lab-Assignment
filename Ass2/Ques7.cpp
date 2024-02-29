#include<iostream>
using namespace std;
class student{
    private:
    int student_id;
    string name;
    string branch;
    float sub1,sub2,sub3,sub4,sub5;
    public:
    void getInfo() 
    {
        cout<<"Enter your id "<<endl;
        cin>>student_id;
        cout<<"Enter your name "<<endl;
        cin>>name;
        cout<<"Enter your branch "<<endl;
        cin>>branch;
        cout<<"Enter the subjects :"<<endl;
        cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    }
    void getpercentage()
    {
        int percent,total;
        total =sub1+sub2+sub3+sub4+sub5;
        percent= (total/500)*100;
        cout<<"The percentage of Marks :"<<endl;
        cout<<percent;
        
    }

};

int main()
{
    student getperc;
    getperc.getInfo();
    getperc.getpercentage();
}