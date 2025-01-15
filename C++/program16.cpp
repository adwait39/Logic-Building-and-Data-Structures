/*
Problem statement
Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1 2 3
1 2
1
*/

#include<iostream>
using namespace std;

void nNumberTriangle(int n)
{
    int i = 0 , j =0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            cout<<j<< "\t";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    nNumberTriangle(n);

}