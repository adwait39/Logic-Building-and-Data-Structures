/*

Problem statement
You are given an integer ‘n’.



Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.



Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.



Example:
Input: ‘n’  = 5

Output: 21

Explanation:
We need to find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to 5. 
‘sumOfDivisors(1)’ = 1
‘sumOfDivisors(2)’ = 2 + 1 = 3
‘sumOfDivisors(3)’ = 3 + 1 = 4
‘sumOfDivisors(4)’ = 4 + 2 +1 = 7 
‘sumOfDivisors(5)’ = 5 + 1 = 6
Therefore our answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) + sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21.

*/

#include<bits/stdc++.h>
using namespace std;

int SumOfDivisors(int iNo)
{
    int iCnt = 0, iCnt2=0, iSum = 0, iSumTotal = 0;

    for(iCnt2=1;iCnt2<=iNo;iCnt2++)
    {
        iSum = 0;
        for(iCnt = 1;iCnt<=iCnt2; iCnt++)
        {
            if(iCnt2%iCnt==0)
            {
               iSum = iSum + iCnt;
            }
        }
        iSumTotal = iSumTotal+iSum;
    } 

    return iSumTotal;
}
int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number:";
    cin>>iValue;

    iRet = SumOfDivisors(iValue);
    return 0;
}