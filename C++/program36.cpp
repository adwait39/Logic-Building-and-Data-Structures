/*
Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

Examples:

Input: n = 5
Output: 225
Explanation: 1^3 + 2^3 + 3^3 + 4^3 + 5^3 = 225
Constraints:
1 <= n <= 200 

*/

#include<bits/stdc++.h>
using namespace std;

int Display(int iValue)
{
    static int iCnt = 0;
    static int iSum = 1;
    if(iCnt<=iValue)
    {
        iSum = iSum+pow(iCnt,3);
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