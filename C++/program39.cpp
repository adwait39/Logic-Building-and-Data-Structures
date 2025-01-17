/*
*/

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr) 
{
    int iP1 = 0;
    int iP2 = arr.size() - 1;

    while (iP1 < iP2)
    {
        // Manual swap using a temporary variable
        int temp = arr[iP1];
        arr[iP1] = arr[iP2];
        arr[iP2] = temp;

        iP1++;
        iP2--;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the array size: ";
    cin >> iValue;

    vector<int> arr(iValue); 

    cout << "Enter elements: ";
    for (int i = 0; i < iValue; i++)
    {
        cin >> arr[i]; 
    }

    reverseArray(arr);

    cout << "Reversed array is: ";
    for (int i = 0; i < iValue; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}
