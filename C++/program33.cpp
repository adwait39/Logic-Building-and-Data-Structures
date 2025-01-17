/*
Recursion-3
Print from 1 to N
*/

#include<bits/stdc++.h>
using namespace std;

void Display(int iValue)
{
    static int iCnt = 1;
    while(iCnt<=iValue)
    {
        cout<<iCnt<<endl;
        iCnt++;
        Display(iValue);
    }
}
int main()
{
    int iNo = 0;
    cout<<"Enter No:";
    cin>>iNo;

    Display(iNo);
    return 0;
}