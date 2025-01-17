/*
Summation of first N numbers.
*/

#include<bits/stdc++.h>
using namespace std;

int Display(int iValue)
{
    static int iCnt = 1;
    static int iSum = 0;
    if(iCnt<=iValue)
    {
        iSum = iSum+iCnt;
        iCnt++;
        Display(iValue);
    }
    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter number:";
    cin>>iNo;

    iRet = Display(iNo);
    cout<<"Sum is:"<<iRet;
    return 0;
}