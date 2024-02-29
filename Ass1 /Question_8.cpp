#include<iostream>
using namespace std;

int main(){
   int m1,m2,m3,m4,m5;
   cout<<"enter the marks of the subjects\n";
   cin>>m1>>m2>>m3>>m4>>m5;
   float per = (m1+m2+m3+m4+m5)/5;
   cout<<"percentage of the marks is "<<per;
    return 0;
}