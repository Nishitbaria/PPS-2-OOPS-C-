#include<iostream>
using namespace std;
class item
{
int ic,cost,qty,price;
public:
void getdata();
void display();
void finalprice();
}s;
void item::getdata()
{
cout<<"Enter item code:";
cin>>ic;
cout<<"Enter cost of Item:";
cin>>cost;
cout<<"Enter quantity:";
cin>>qty;
cout<<"Enter price of item:";
cin>>price;
}
void item::display()
{
cout<<"Item code:"<<ic<<endl;
cout<<"Cost:"<<cost<<endl;
cout<<"quantity:"<<qty<<endl;
cout<<"price:"<<price<<endl;
}
void item::finalprice()
{
    cout<<"The final price is:"<<qty*price;
}
int main()
{
s.getdata();
s.display();
s.finalprice();
}