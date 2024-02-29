#include<iostream>
using namespace std;
class Hello{
 public:
 int a,b;
 int total,avg;
 void input()
 {
    cout<<"Enter the number ";
    cin>>a>>b;
 }
 void display()
 {
   total=a+b;
   cout<<"Total "<<total;
   avg=(a+b)/2;
   cout<<"Average :"<<avg;
 }
};
int main()
{
    Hello ob1;
    ob1.input();
    ob1.display();
}