#include<iostream>
using namespace std;
class book
{
char bookname[10],authorname[10];
int rate,qty;
public:
void getdata();
void display();
void finalprice();
}s;
void book::getdata()
{
cout<<"Enter Book name:";
cin>>bookname;
cout<<"Enter author name:";
cin>>authorname;
cout<<"Enter Book rate:";
cin>>rate;
cout<<"quqntity of book:";
cin>>qty;
}
void book::display()
{
 cout<<"book name:"<<bookname<<endl;
  cout<<"author name:"<<authorname<<endl;
   cout<<"book rate:"<<rate<<endl;
    cout<<"quntity number:"<<qty<<endl;
}
void book::finalprice()
{
       cout<<"The final price is:"<<qty*rate;
}
int main()
{
s.getdata();
s.display();
s.finalprice();
   return 0; 
}