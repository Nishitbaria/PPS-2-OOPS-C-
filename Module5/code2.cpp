#include <bits/stdc++.h>
using namespace std;
class Book
{
    private:
        string book_name;
        string author_name;
        float rate,item_total;
        int qty;
    public:
        Book() : book_name("Unknown") , author_name("Unknown") , rate(0) , item_total (0) , qty(0) {}
        void input()
        {
            fflush(stdin);
            cout<<"------------------------------"<<endl;
            cout<<"Enter Book name : ";
            getline(cin,book_name);
            cout<<"Enter Author name  : ";
            getline(cin,author_name);
            cout<<"Enter rate and quantity  : ";
            cin>>rate>>qty;
            item_total=rate*qty;
        }
        void print()
        {
         cout<<"--------------------------"<<endl;
         cout<<"Book name        : "<<book_name<<endl;
         cout<<"Author name      : "<<author_name<<endl;
         cout<<"Book price       : "<<rate<<endl;
         cout<<"Quantity         : "<<qty<<endl;
         cout<<"Total Item Price : "<<item_total<<endl;
        }
        void sort(Book b[],int& counter)
        {
            Book temp;
            for(int j=0 ; j<counter ; j++)
            {
                for(int k=j+1 ; k<counter ; k++)
                {
                    if(b[j].item_total<b[k].item_total)
                    {
                        temp=b[j];
                        b[j]=b[k];
                        b[k]=temp;
                    }
                }
            }
        }
        inline void totalP(float &sum)
        {
            sum+=item_total;
        }
};
int main()
{
    int size;
    float total_price=0;
    cout<<"How many books are you buying : ";
    cin>>size;
    
    Book b[size];
    
    for(int it=0;it<size;it++)
        b[it].input();    

    for(int it=0;it<size;it++)
        b[it].sort(b,size);
    
    for(int it=0;it<size;it++)
    {
        b[it].print();
        b[it].totalP(total_price);
    }
cout<<"------------------\nYour total bill is of "<<total_price<<" Rs\n";
}