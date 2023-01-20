#include<iostream>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    int d = 0;
    int r;

    cout<<"Enter how much range you want: ";
    cin>>r;

    cout<<"The series is: "<<a<<endl;
    cout<<"The series is: "<<b<<endl;

    for(int c = 0 ; c < r ; c++)
    {
        d = a+b;
        cout<<"The series is: "<<d<<endl;
        a = b;
        b = d;
    }
}