#include<iostream>
#include<iomanip>
using namespace std;

class time

{
	int  h,m,s;

	public:
	void getdata();
	void convertdata();
}T1;
void time::getdata()
	{
		cout<<"Enter the time in seconds"<<endl;
		cin>>s;
	}

	void time::convertdata()
	{
		cout<<"-----------------------------------------------------------"<<endl;

		h=0;
		m=0;
		for(;s>=60;++m)
		{

			s=s-60;
		}
		for(;m>=60;++h)
		{

			m=m-60;
		}

		cout<<"The time in the format of [hours:minutes:seconds] is"<<"["<<h<<":"<<m<<":"<<s<<"]";
	}
int main()
{
	T1.getdata();
	T1.convertdata();
	return 0;
}