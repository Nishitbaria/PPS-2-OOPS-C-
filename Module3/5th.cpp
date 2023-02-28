// wap that prints charater on screen using funcation overloding 
#include<iostream>
using namespace std;
int print(char a)
{
cout<<a<<"\n";
}
int print(char a,char b)
{
cout<<a<<""<<b<<"\n";
}
int main()
{
    print('a');
    print('b','c');
    return 0;
}