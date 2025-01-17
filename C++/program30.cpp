/*
GCD
*/

#include<bits/stdc++.h>
using namespace std;

int DisplayGCD(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iGcd = 0;
    for(iCnt=1;iCnt<=iNo1; iCnt++)
    {
        if((iNo1%iCnt==0)&&(iNo2%iCnt==0))
        {
            iGcd = iCnt;
        }
    }

    return iGcd;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter number 1:";
    cin>>iValue1;
    cout<<"Enter number 2:";
    cin>>iValue2;

    iRet = DisplayGCD(iValue1,iValue2);
    cout<<"GCD is:"<<iRet;
    return 0;
}