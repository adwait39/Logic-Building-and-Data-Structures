/*
Problem Statement:Print Divisors
*/

#include<bits/stdc++.h>
using namespace std;

void Divisors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo; iCnt++)
    {
        if(iNo%iCnt==0)
        {
            cout<<iCnt<<endl;
        }
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter number:";
    cin>>iValue;

    Divisors(iValue);
    return 0;
}