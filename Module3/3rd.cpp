#include<iostream>
using namespace std;
int &zerosmaller(int &xx,int &yy)
{
if(xx<yy)
return xx;
else 
return yy;
}
int main()
{
int x,y;
cout<<"Enter two number:";
cin>>x>>y;
zerosmaller(x,y)=0;
cout<<"New valuse are:"<<x<<y;
return 0;
}