#include <iostream>
using namespace std;
class student
{
    private:
        char  name[30];
        int   rollNo,total;
        float perc;
    public:
        void getDetails();
        void putDetails();
};
void student::getDetails(){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;
     
    perc=(float)total/500*100;
}
void student::putDetails(){
    cout << "Student details:\n";
    cout << "Name:"<< name <<endl<< ",Roll Number:" << rollNo <<endl<< ",Total:" << total<<endl << ",Percentage:" << perc<<endl;
}
 
int main()
{
    student std[10];      
    int n,i;
    cout << "Enter total number of students: ";
    cin >> n;  
    for(i=0;i< n; i++){
        cout << "Enter details of student " << i+1 << ":\n";
        std[i].getDetails();
    }
    cout << endl;
    for(i=0;i< n; i++){
        cout << "Details of student " << (i+1) << ":\n";
        std[i].putDetails();
    } 
    return 0;
}