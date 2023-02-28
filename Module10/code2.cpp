// Explain Friend function and its characteristics. Define a class
// matrix with an integer array of 3X3 as a data member. Define a
// friend function which adds two matrix objects and returns
// resultant matrix object
#include<iostream>
#include<string>
using namespace std;
class Matrix
{
private:  
    int arr[3][3];
public:
    friend Matrix addition(Matrix& , Matrix&);
    friend void input(Matrix&);
    friend void display(Matrix&);
};

void input(Matrix &m)
{
   cout << "Enter matrix elements [3x3] : ";
    for(int i = 0 ; i < 3 ; i++)
        for(int j = 0 ; j < 3 ; j++)
   cin >> m.arr[i][j];
}
void display(Matrix &mm)
{
    for(int i = 0 ; i < 3 ; i++)
        for(int j = 0 ; j < 3 ; j++)
            cout << mm.arr[i][j] << " ";
}
Matrix addition(Matrix& mm1 , Matrix& mm2)
{
    Matrix temp;
    for(int i = 0 ; i < 3 ; i++)
        for(int j = 0 ; j < 3 ; j++)
            temp.arr[i][j] = mm1.arr[i][j] + mm2.arr[i][j] ;
    return temp;
}

int main()
{
    Matrix m1 , m2;
    input(m1);
    input(m2);
    Matrix add = addition(m1 , m2);
   cout << "Added Matrix : ";
    display(add);
}           