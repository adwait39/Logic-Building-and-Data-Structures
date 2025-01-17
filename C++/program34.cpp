/*
Recursion-3
Print from N to 1
*/

#include<bits/stdc++.h>
using namespace std;

void Display(int iValue)
{
    static int iCnt = 1;
    if(iValue>0)
    {
        cout<<iValue<<endl;
        Display(iValue-1);
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