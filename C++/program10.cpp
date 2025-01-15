#include<iostream>
using namespace std;

int Add(int iValue1, int iValue2)
{
    int iSum = 0;
    iSum = iValue1 + iValue2;
    return iSum;
}
int main()
{
    int iNo1 = 0,iNo2 = 0,iResult = 0;

    cout<<"Enter the first number:";
    cin>>iNo1;

    cout<<"Enter the second number:";
    cin>>iNo2;

    iResult = Add(iNo1,iNo2);
    cout<<"Addition is:"<<iResult;
    return 0;
}