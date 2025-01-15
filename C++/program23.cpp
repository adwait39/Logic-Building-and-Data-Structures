/*
Problem statement
Count digits.

*/

#include<iostream>
using namespace std;

int CountDigits(int iValue)
{
    int iCnt=0, iDigit=1;
    while(iValue>0)
    {
        iDigit = iValue%10;
        iCnt++;
        iValue = iValue/10;
    }

    return iCnt;
}

int main()
{
    int iNo = 0;
    cout<<"Enter number:";
    cin>>iNo;

    CountDigits(iNo);

    int iRet = 0;
    iRet = CountDigits(iNo);

    cout<<"Number of digits are:"<<iRet;
}