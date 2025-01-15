/*
Problem statement
You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.


An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

*/

#include<bits/stdc++.h>
using namespace std;

bool CheckArmstrong(int iValue)
{
    int iDigit = 0, iSum=0;
    int OriginalValue = 0;
    OriginalValue = iValue;
    int tempValue = iValue;
    int NumCnt = 0;

    while(tempValue>0)
    {
        iDigit = tempValue%10;
        NumCnt++;
        tempValue = tempValue/10;
    }

    cout<<"Number of digits:"<<NumCnt<<endl;
    while(iValue>0)
    {
        iDigit = iValue%10;
        iSum = iSum + pow(iDigit,NumCnt);
        iValue = iValue/10;
    }

    if(iSum == OriginalValue)
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
    cout<<"Enter the number:";
    cin>>iNo;

    bool bResult = false;
    bResult = CheckArmstrong(iNo);

    if(bResult==true)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not an Armstrong number";
    }
}