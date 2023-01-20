#include<iostream>
using namespace std;

int checkFrequency(int num,int fre);

int main()
{
    int num,fre;

    cout<<"Enter the number: ";
    cin>>num;

    cout<<"Enter the frequency number you check: ";
    cin>>fre;

    int ans = checkFrequency(num,fre);
    cout<<ans;
}

int checkFrequency(int num,int fre)
{
    int count = 0;
    int a,b,c,d;

    while(num > 0)
    {
        a = num%10;
        b = num/10;
        num = b;
        if(a == fre)
        {
            count++;
        }

    }

    return count;
}