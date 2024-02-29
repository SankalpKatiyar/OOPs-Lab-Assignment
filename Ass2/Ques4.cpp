#include<iostream>
#define pi 3.14
using namespace std;
class calculation{
    private:
    int radius,area;
    public:
    void getradius()
    {
        cout<<"Enter the Radius"<<endl;
        cin>>radius;

    }
    void areacircle()
    {
        cout<<"Area of Circle is :"<<endl;
        area = pi*(radius*radius);
        cout<<area<<endl;
    }
};

int main()
{
    calculation Area;
    Area.getradius();
    Area.areacircle();
}