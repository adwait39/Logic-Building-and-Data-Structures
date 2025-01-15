/*
Problem statement
Check whether a given number ’n’ is a palindrome number.

Note :
Palindrome numbers are the numbers that don't change when reversed.
You don’t need to print anything. Just implement the given function.
Example:
Input: 'n' = 51415
Output: true
Explanation: On reversing, 51415 gives 51415.
*/

#include<bits/stdc++.h>
using namespace std;

bool CheckPalindrome(int iValue)
{
    int iDigit = 0, Rev_num = 0;
    int OriginalValue = 0;
    OriginalValue = iValue;

    while(iValue>0)
    {
        iDigit = iValue%10;
        Rev_num = (Rev_num*10)+iDigit;
        iValue = iValue/10;
    }

    if(Rev_num==OriginalValue)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo = 0;
    cout<<"Enter the number to be reversed:";
    cin>>iNo;

    bool bResult = false;
    bResult = CheckPalindrome(iNo);

    if(bResult==true)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not a palindrome";
    }
}