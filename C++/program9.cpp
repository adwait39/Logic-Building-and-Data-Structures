#include<iostream>
using namespace std;

void DisplayName(string Snam)
{
    cout<<"Hey"<<""<<""+Snam<<endl;
}
int main()
{
    string name;

    cout<<"Enter your name:";
    cin>>name;

    DisplayName(name);
    return 0;
}