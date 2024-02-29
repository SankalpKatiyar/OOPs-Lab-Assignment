#include<iostream>
using namespace std;
class Time{
      private:
      int hr;
      int mm;
      int sec;
      int totalsec;
      public:
      void input()
      {
        cout<<"Enter the hour :"<<endl;
        cin>>hr;
        cout<<"Enter the minutes :"<<endl;
        cin>>mm;
        cout<<"Enter the seconds :"<<endl;
        cin>>sec;

      }
      void seconds()
      {
        totalsec = (hr*3600)+(mm*60)+sec;
      
        cout<<"Total second are :"<<totalsec<<endl;

      }
};
int main()
{
    Time SEC;
    SEC.input();
    SEC.seconds();
}