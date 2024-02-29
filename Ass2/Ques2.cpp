#include<iostream>
using namespace std;
class Area{
 public:
    int length;
    int breadth;
    int result;
 int setDim(int a ,int b)
 {
   length = a;
   breadth =b;

 }
 int getArea()
 {
    return result =length*breadth;
 }
};

int main()
{
    int length,breadth;
    cout<<"Enter the length Of the Rectangle "<<endl;
    cin>>length;
    cout<<"Enter the Breadth of the Rectangle"<<endl;
    cin>>breadth;

    Area Rec;
    Rec.setDim(length,breadth);
    int ans=Rec.getArea();
    cout<<"Area "<< ans;

}