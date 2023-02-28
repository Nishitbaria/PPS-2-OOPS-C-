// 6th no program
#include<iostream>
using namespace std;
double power(double m,int n=2)
{
double rest=1;
for(int i=0;i<n;i++)
rest*=m;
return rest;
}
int main()
{
    double num;
    int pow;
    char ch;
    cout<<"Enter a number :";
    cin>>num;
    cout<<"Do you want to enter a power[y/n]\n";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"Enter power :";
        cin>>pow;
        cout<<power(num,pow)<<"is the result";
    }
    else 
    cout<<power(num)<<"is the result";
    return 0;
}