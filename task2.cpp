#include<iostream>
using namespace std;

int countNumber(int num);

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    int ans = countNumber(number);
    cout<<"Digits in the number is: "<<ans;
}

int countNumber(int num)
{
    int a = 0;
    int c = num;
    while(num > 0)
    {
        a++;
        num = num/10;
    }
    return a;
}