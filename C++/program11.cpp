/*
Link:https://www.naukri.com/code360/problems/n-forest_6570177?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems
Problem statement
Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N-dimensional forest.

Example:
Input: ‘N’ = 3

Output: 
* * *
* * *
* * *
*/
#include<iostream>
using namespace std;

void PrintPattern(int iRow, int iCol)
{
    int iCnt = 0, j=0;
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(j=1;j<=iCol;j++)
        {
            cout<<"*\t";
        }
        cout<<"\n";
    }
}
int main()
{
    int iNo1 = 0, iNo2 = 0;

    cout<<"Enter number of rows:";
    cin>>iNo1;
    cout<<"Enter number of columns:";
    cin>>iNo2;

    PrintPattern(iNo1,iNo2);

}