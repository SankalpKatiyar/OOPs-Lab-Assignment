#include<iostream>
using namespace std;
class Hello{
 public:
 int a;
 void input()
 {
    cout<<"Enter the number ";
    cin>>a;
 }
 void display()
 {
    cout<<a<<endl;
 }
};
int main()
{
    Hello ob1;
    ob1.input();
    ob1.display();
}