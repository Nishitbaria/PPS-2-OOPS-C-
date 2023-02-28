#include <bits/stdc++.h>
using namespace std;
class Matrix
{
private:
    int arr[10][10] , rows , cols;
public:
    Matrix()
    {
        for(int i = 0 ; i < 10 ; i++)
            for( int j = 0 ; j < 10 ; j++)
                arr[i][j] = 0;
    }
    void input (int &rr , int &cc)
    {
        rows = rr;
        cols = cc;
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                cin >> arr[i][j] ;
    }
    void print ()
    {
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                cout << arr[i][j] << " ";
        cout << "\n";
    }
    Matrix add(const Matrix &m)
    {
        Matrix temp;
        temp.rows = rows;
        temp.cols = cols;
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                temp.arr[i][j] = arr[i][j] + m.arr[i][j] ;
        return temp;
    }
    Matrix sub(const Matrix &m)
    {
        Matrix temp;
        temp.rows = rows;
        temp.cols = cols;
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                temp.arr[i][j] = arr[i][j] - m.arr[i][j] ;
        return temp;
    }
    Matrix mul(const Matrix &m)
    {
        Matrix temp;
        temp.rows = rows;
        temp.cols = cols;
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                for(int k = 0 ; k < rows ; k++)
                    temp.arr[i][j] += arr[i][k] * m.arr[k][j];
        return temp;
    }
    Matrix div(const Matrix &m)
    {
        Matrix temp;
        temp.rows = rows;
        temp.cols = cols;
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                temp.arr[i][j] = arr[i][j] / m.arr[i][j] ;
        return temp;
    }
};
int main()
{
    int size , rows , cols , check , x , y;
    cout << "Enter how many matrix you want : ";
    cin >> size;
    cout << "Enter rows and cols of matrix : ";
    cin >> rows >> cols ;
    Matrix m[size];
    Matrix result;
    for ( int i = 0 ; i < size ; i++)
    {
        cout << "Enter Matrix-" << i+1 << " elements : ";
        m[i].input(rows , cols);
    }
    int choice;
    cout << "Which two matrix do you want to do operations with : ";
    cin >> x >> y;
    cout << "1] Addition\n2] Subtraction\n3] Multiplication\n4] multiplication \n";
    cin>>choice;
        switch(choice)
        {
        case 1: result = m[x-1].add(m[y-1]);
            result.print();
            break;
        case 2: result = m[x-1].sub(m[y-1]);
            result.print();
            break;
        case 3: result = m[x-1].mul(m[y-1]);
            result.print();
            break;
        case 4: result = m[x-1].div(m[y-1]);
            result.print();
            break;
        default:
            cout << "Invalid Input";
        }
        return 0;
}