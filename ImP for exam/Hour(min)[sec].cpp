#include<iostream>  
 #include<conio.h>  
 class time  
 {  
      int hour,minute,second;  
      public:  
      time()  
      {  
           hour = 0;  
           minute = 0;  
           second = 0;  
      }  
      time(int h,int m,int s)  
      {  
           hour = h;  
           minute = m;  
           second = s;  
      }  
      void show()  
      {  
           cout<<"\n-- Total Time --";  
           cout<<endl<<"Hours  : "<<hour<<endl<<"Minutes : "<<minute<<endl<<"Seconds : "<<second;  
      }  
      time operator +(time tt)  
      {  
           time t;  
           t.hour=tt.hour+hour;  
           t.minute=tt.minute+minute;  
           t.second=tt.second+second;  
           while(t.second>60)  
           {  
                t.second-=60;  
                t.minute++;  
           }  
           while(t.minute>60)  
           {  
                t.minute-=60;  
                t.hour++;  
           }  
           return t;  
      }  
 };  
 void main()  
 {  
      clrscr();  
      int h,m,s;  
      cout<<"Addition of two Timestamps by overloading + operator.";  
      cout<<"\n-- Enter Time1 --\n\nHours  : ";  
      cin>>h;  
      cout<<"Minutes : ";  
      cin>>m;  
      cout<<"Seconds : ";  
      cin>>s;  
      time t1(h,m,s);  
      cout<<"\n-- Enter Time2 --\n\nHours  : ";  
      cin>>h;  
      cout<<"Minutes : ";  
      cin>>m;  
      cout<<"Seconds : ";  
      cin>>s;  
      time t2(h,m,s),t3;  
      t3=t1+t2;  
      t3.show();  
      getch();  
 }  