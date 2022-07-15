// Write a C++ program to overload the + operator to concatenate two strings
#include<iostream>
#include<cstring>
using namespace std;
class str
{
char a[30];
public:
int getdata()
{
cout<<"Enter string:";
gets(a);
}
str operator +(str x)
{
str temp;
strcat(a,x.a);
strcpy(temp.a,a);
return temp;
}
void display()
{
cout<<"Aftetr Convatenation we get\n"<<a;
}
};
int main()
{
str s1,s2,s3;
s1.getdata();
s2.getdata();
s3=s1+s2;
s3.display();
    return 0;
}

