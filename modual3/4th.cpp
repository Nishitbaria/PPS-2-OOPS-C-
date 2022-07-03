// WAP that prints various types of data using funcation overloding::
#include<iostream>
using namespace std;
float area(int r)
{
    return 3.14*r*r;
}
float area(int h,int b)
{
return 0.5*h*b;
}
float area(int l,int w,int h)
{
return l*w*h;
}
int main()
{
cout<<"area of circle ="<<area(5);
cout<<"\n area of triangle ="<<area(4,9);
cout<<"\n area of box="<<area(5,8,2);
return 0;
}