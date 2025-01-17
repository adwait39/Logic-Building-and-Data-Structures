/*
Prime Number
*/

#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
    int iCnt = 0, count =0;
    for(iCnt=1;iCnt<=n;iCnt++)
    {
        if(n%iCnt==0)
        {
            count++;
        }
    }

    if(count == 2)
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
    bool bRet = false;

    cout<<"Enter number:";
    cin>>iNo;

    bRet = isPrime(iNo);

    if(bRet == true)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not a prime number";
    }

    return 0;
}