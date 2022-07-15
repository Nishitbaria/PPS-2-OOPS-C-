/* Define a circle class with radius as data member, necessary constructors and member
 function to compute area of circle. Class should overload the = = operator to compare
  two circle objects whether they are equal in radius. Demonstrate its use in main(). */
#include<iostream>
using namespace std;
class circle
{
 float r;
 float area;
 public:
 circle()
 {
  r=0;
 }
 circle(float a)
 {
  r=a;
 }

 void compute()
 {
   area=3.14*r*r;

 }
 void show()
 {
  cout<<"Area : "<<area<<endl;
 }
 int operator ==(circle c1)
  {
   if(area==c1.area)
   return 1;
   else
   return 0;
  }
};
int main()
{
 float r;
  cout<<"\nEnter Radius r : ";
  cin>>r;
 circle c1(r);
 c1.compute();
 c1.show();
 cout<<"\nEnter Radius r : ";
  cin>>r;
 circle c2(r);
 c2.compute();
 c2.show();
 if(c1 == c2)
 {
   cout<<"\nArea of circle are same.\n";
  }
  else
  {
     cout<<"\n    Area of circle are not same.\n";
   }
return 0;
}