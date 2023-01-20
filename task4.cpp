#include<iostream>
using namespace std;

int sum(int num);

int main()
{
    int num,fre;

    cout<<"Enter the number: ";
    cin>>num;

    int ans = sum(num);
    cout<<"Sum is: "<<ans;
}

int sum(int num)
{
    int mod,div,sum = 0;

    while(num > 0)
    {
        mod = num%10;
        div = num/10;
        num = div;

        sum = sum+mod;
    }

    return sum;
}