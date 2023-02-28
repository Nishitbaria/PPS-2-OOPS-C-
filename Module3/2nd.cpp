//wap to add two matrix using default arguments::
#include<iostream>
using namespace std;
int a[3][3],b[3][3],c1[3][3],i,j;
void matrix_a(int r=3,int c=3)
{
cout<<"Enter a[][]";
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    { 
        cin>>a[i][j];
    }
}
}
void matrix_b(int r=3,int c=3)
{
cout<<"Enter b[][]";
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    { 
        cin>>b[i][j];
    }
}
}
void matrix_c1(int r=3,int c=3)
{
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    { 
        cout<<"";
        c1[i][j]=a[i][j]+b[i][j];
        cout<<c1[i][j];
    }
cout<<"\n";
}

}
int main()
{
    matrix_a();
  matrix_b();
    matrix_c1();
    return 0;
}