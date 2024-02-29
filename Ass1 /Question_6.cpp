#include<iostream>
#define pi 3.14
using namespace std;

int main(){
    int r;
    cout<<"enter the radius of the circle: \n";
    cin>>r;
    float rad = (pi*r*r);
    cout<<"area of circle = "<<rad;
    return 0;
}