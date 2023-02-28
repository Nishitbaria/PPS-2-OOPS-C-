//Create a student with the following data members : rollno, name, marks[6], per, class
#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
   string name;
    int rollno , marks[6] , class_division ; 
    float percentage;
public:
    Student() : name("Unknown") , rollno(0) , class_division(0) , percentage(0) { }
    void getData()
    {
        fflush(stdin);
        cout << "Enter student name    : ";
        getline(cin , name);
        cout << "Enter rollno & class  : ";
       cin >> rollno >> class_division ;
        for(int i = 0 ; i < 6 ; i++)
        {
            cout << "Enter Subject-" << i+1 << " marks : ";
            cin >> marks[i] ;
        }
    }
    void displayData()
    {
        cout << "Name    : " << name << "\n";
        cout << "Class   : " << class_division << "\n";
        cout << "Roll no : " << rollno << "\n";
        for( int i = 0 ; i < 6 ; i++)
            cout << " Subject-" << i+1 << " :" << marks[i] << "/100\n";
        cout << " Percentage : " << percentage << "\n";
    }
    void calcPercentage()
    {
        for(int i = 0 ; i < 6 ; i++)
            percentage += marks[i];
        percentage /= 6 ;
    }
    void sortByPercentage( Student s[] , int size )
    {
        Student temp;
        for(int i = 0 ; i < (size-1) ; i++ )
            for( int j = i+1 ; j < size ; j++)
                if( s[i].percentage < s[j].percentage)
                {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
    }
};
int main()
{
    int size;
    cout << "Enter number of students : " ;
   cin >> size ;
    Student s[size] ; 
    for(int i=0 ; i < size ; i++)
    {
        cout << "----------------------------\nEnter Student-" << i+1 << " details\n----------------------------\n";
        s[i].getData();
        s[i].calcPercentage();
    }
    s[0].sortByPercentage(s, size);
    for(int i=0 ; i < size ; i++)
    {
        cout << "----------------------------\nStudent-" << i+1 << " details\n----------------------------\n";
        s[i].displayData();
    }
}