/*
Problem statement
Sam is making a Triangular painting for a maths project.

An N-dimensional Triangle is represented by the lower triangle of the pattern filled with integers starting from 1.

For every value of ‘N’, help sam to print the corresponding N-dimensional Triangle.

Example:
Input: ‘N’ = 3

Output: 
1
1 2 
1 2 3
*/

#include<iostream>
using namespace std;

void nTriangle(int n) 
{
	int i = 0, j = 0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<< j << " ";
		}
		cout<<"\n";
	}
}

int main()
{
    int iNo1 = 0;
    cout<<"Enter number:";
    cin>>iNo1;
    nTriangle(iNo1);

}