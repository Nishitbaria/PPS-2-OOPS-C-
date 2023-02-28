//class string with the data member as char str[20]
#include<iostream>
#include<cstring>
using namespace std;
class StringC
{
private:
    char str[20];
public:
    StringC() : str("Unknown") {}
    inline void getData()
    {
       cout << "Enter string [<20 letters] : ";
        cin >> str ;
    }
    inline void displayData()
    {
        std::cout << str << "\n";
    }
    void operator +( StringC& t )
    {
        strcat(str , t.str);
    }
};
int main()
{
    int size , string1 , string2 ;
cout << "How many Strings you want to input : ";
 cin >> size ;
    StringC s[size];

    for(int i = 0 ; i < size ; i++)
        s[i].getData();

    std::cout << "All entered strings :- \n";
    for(int i = 0 ; i < size ; i++)
    {
       cout << i+1 << "]";
        s[i].displayData();
    }
   cout << "Which two Strings you want to concatenate : ";
    cin >> string1 >> string2 ;
    --string1;
    --string2;
    if( string1 < size && string2 < size)
    {
        s[string1] + s[string2] ;
        s[string1].displayData();
    }
    else    
        cout << "Invalid Input";
}