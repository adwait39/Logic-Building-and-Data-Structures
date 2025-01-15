/*
Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

*****
 ***
  *

*/

#include<iostream>
using namespace std;

void nStarTriangle(int n)
{
    int i = 0 , j =0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    nStarTriangle(n);

}