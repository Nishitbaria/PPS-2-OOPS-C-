/*  9. Define a class complex with real and imaginary as two data member, add necessary
 constructors and member function to initialize and display data of class. Class should
 overload the + operator to add two complex objects and return the results. Invoke the
 statements like C3=C1+C2 in main ()                                                 */
#include<iostream>
using namespace std;
class complex
{
int img,real;
public:
complex(){}
complex(int x,int y)
{
img=y;
real=x;
}
void display()
{
cout<<"\n"<<real<<" + "<<img<<"i ";
}
complex operator +(complex p)
{
    complex temp;
    temp.real=real+p.real;
    temp.img=img+p.img;
    return temp;
}
};
int main()
{
complex c1(4,5),c2(6,4),c3;
c1.display();
c2.display();
c3=c1+c2;
cout<<"\n\nAfter addition of 2 objects :";
c3.display();
return 0;
}