/*
Problem statement
Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

An N/2-dimensional forest is represented by the lower triangle of the pattern filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N/2-dimensional forest.

Example:
Input:  ‘N’ = 3

Output: 
* 
* *
* * *
*/
#include<iostream>
using namespace std;

void nForest(int n) 
{
	int i = 0, j = 0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*\t";
		}
		cout<<"\n";
	}
}

int main()
{
    int iNo1 = 0;
    cout<<"Enter number:";
    cin>>iNo1;
    nForest(iNo1);

}