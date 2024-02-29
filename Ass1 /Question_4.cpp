#include<iostream>
using namespace std;

int main(){
    float temp1,temp2,temp3,temp4,temp5;
    cout<<"enter the temperature of five cities of Gujrat:\n";
    cin>>temp1>>temp2>>temp3>>temp4>>temp5;

    float avg = (temp1+temp2+temp3+temp4+temp5)/5;
    cout<<"avg of temperature: "<<avg;
    return 0;
}