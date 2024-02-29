#include<iostream>
using namespace std;

int main(){
    int p,r,t;
    cout<<"enter the price, rate and time to calculate simple interest: \n";
    cin>>p>>r>>t;
    float SI = (p*r*t)/100;
    cout<<"SI = "<<SI;
    return 0;
}