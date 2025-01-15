/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
*/

#include<bits/stdc++.h>
using namespace std;

int RevNum(int iValue)
{
    int iDigit = 0, Rev_num = 0;

    while(iValue>0)
    {
        iDigit = iValue%10;
        Rev_num = (Rev_num*10)+iDigit;
        iValue = iValue/10;
    }

    return Rev_num;
}

int main()
{
    int iNo = 0;
    cout<<"Enter the number to be reversed:";
    cin>>iNo;

    int iResult = 0;
    iResult = RevNum(iNo);

    cout<<"Reversed number:"<<iResult;
}