#include<bits/stdc++.h> // All the libraries here.
using namespace std;
#include<utility>


void ExpPairs()
{
    pair<int,int>p1={1,2};
    cout<<p1.first<<" "<<p1.second;

    pair<int , pair< int,int>>p={1,{3,4}};
    cout<<p.first<<""<<p.second.first;

    pair<int,int>arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].second;
    cout<<arr[1].first;

}
int main()
{
    ExpPairs();
}