 #include<iostream>  
using namespace std;
 class vehicle  
 {  
      public:  
      double price;  
      int year;  
      int get_basic()  
      {  
           cout<<"\nEnter Price of the Vehicle : ";  
           cin>>price;  
           cout<<"Enter Year of Manufacture : ";  
           cin>>year;  
      }  
 };  
   
 class bus : public vehicle  
 {  
      int s_cap;  
      public:  
      int get_bus_cap()  
      {  
           cout<<"Enter Sitting Capacity : ";  
           cin>>s_cap;  
      }  
   
      int disp_bus()  
      {  
           cout<<endl<<"\n................................";  
           cout<<"\nVehicle Type    : BUS";  
           cout<<"\nPrice       : "<<price;  
           cout<<"\nYear of Manfacture : "<<year;  
           cout<<"\nSitting Capacity  : "<<s_cap;  
      }  
 };  
   
 class truck : public vehicle  
 {  
      int l_cap;  
      public:  
      int get_truck_cap()  
      {  
           cout<<"Enter Loading Capacity(Tons) : ";  
           cin>>l_cap;  
      }  
   
      int disp_truck()  
      {  
           cout<<endl<<"\n.........................";  
           cout<<"\nVehicle Type    : TRUCK";  
           cout<<"\nPrice       : "<<price;  
           cout<<"\nYear of Manfacture : "<<year;  
           cout<<"\nLoading Capacity  : "<<l_cap<<" Tons";  
      }  
 };  
   
 int main()  
 {  
    
      bus b;  
      truck t;  
      cout<<"BUS : ";  
      b.get_basic();  
      b.get_bus_cap();  
      cout<<"\nTRUCK : ";  
      t.get_basic();  
      t.get_truck_cap();  
      b.disp_bus();  
      t.disp_truck();  
return 0;
 }  