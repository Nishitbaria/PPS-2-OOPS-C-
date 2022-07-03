   //write overloding funcation to convert ascii to int and ascii to float....
    #include<iostream>
using namespace std;
float convert(char a)
{
return(float)a;
}
int convert(int a)
{
    return a;
}
int main()
{
    cout<<convert('a')<<"\n";
    cout<<convert('-');
}