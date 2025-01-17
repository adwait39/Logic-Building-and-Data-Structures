/*
Recursion-2
Print name 5 times.
*/

#include<bits/stdc++.h>
using namespace std;

void Display()
{
    static int iCnt = 0;
    if(iCnt<=5)
    {
        cout<<"Adwait"<<endl;
        iCnt++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}