//  Assume that Circle is defined using radius and Cylinder is defined using radius and
// height. Write a Circle class as base class and inherit the Cylinder class from it. Develop
// classes such that user can compute the area of Circle objects and volume of Cylinder
// objects. Area of Circle is pie *radius*radius, while volume of Cylinder is pie*(radius *
// radius)*height.
#include<iostream>  
using namespace std;
 class circle  
 {  
      public:  
      float rad;  
      float area(float rad)  
      {  
           return 3.14*rad*rad;  
      }  
 };  
   
 class cylinder : public circle  
 {  
      public:  
      float rad2,height;  
      float volume(float rad2, float height)  
      {  
           return 3.14*(rad2*rad2)*height;  
      }  
 };  
   
 int main()  
 {  
      float r,r2,h;  
      cylinder obj;  
      cout<<"Radius of Circle : ";  
      cin>>r;  
      cout<<"\nArea of Circle : "<<obj.area(r);  
      cout<<"\n=======================\n\nRadius of Cylinder : ";  
      cin>>r2;  
      cout<<"\nHeight of Cylinder : ";  
      cin>>h;  
      cout<<"\n\nVolume of Cylinder : "<<obj.volume(r2,h);  
    return 0; 
 }  