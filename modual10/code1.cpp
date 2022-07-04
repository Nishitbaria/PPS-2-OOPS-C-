// Write a program for string class using copy constructor.
#include<iostream>
#include<string>
using namespace std;
class StringC
{
private:
    string str;
public:
    StringC() : str("Unknown") {}
    StringC( string strr)
    {
        str = strr;
    }
    StringC(const StringC &s)
    {
        str = s.str ;
    }
    void display()
    {
        cout << "\nString = " << str; 
    }
};
int main()
{
   string msg;
    cout << "Enter string : ";
    getline(cin , msg);
    StringC s1(msg);
    StringC s2(s1);
   cout << "\nDisplaying 2nd objects string";
    s2.display();
}