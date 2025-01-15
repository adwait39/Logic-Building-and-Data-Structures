/*
Problem statement
Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.

For every value of ‘N’, print the field if the trees are represented by ‘*’.

Example:
Input: ‘N’ = 3

Output: 
* * *
* *
*

*/

#include<iostream>
using namespace std;

void seeding(int n)
{
    int i = 0 , j =0;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<"*"<< "\t";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    seeding(n);


}