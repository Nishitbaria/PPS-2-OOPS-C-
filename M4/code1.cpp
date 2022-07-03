#include <iostream>
using namespace std;
class player
{
    char name[30];
    int age,run,hi,lo;
    float avg;
   public:
   void getdata();
   void display();
}s;
void player::getdata()
{
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter Run:";
    cin>>run;
    cout<<"High run:";
    cin>>hi;
    cout<<"Enter low run:";
    cin>>lo;
    cout<<"Enter Avgrage:";
    cin>>avg;
}
void player::display()
{
   cout<<"Cricket data:\n";
   cout<<"Name:"<<name<<endl<<"Run:"<<run<<endl<<"high:"<<hi<<endl<<"low run:"<<lo<<endl<<"avgrage:"<<avg<<endl;
}
int main()
{
    s.getdata();
    s.display();
    return 0;
}