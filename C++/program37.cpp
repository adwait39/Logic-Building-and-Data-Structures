/*
You are given an array of integers arr[]. Your task is to reverse the given array.

Note: Modify the array in place.

Examples:

Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]
Explanation: The elements of the array are 1 4 3 2 6 5. After reversing the array, the first element goes to the last position, the second element goes to the second last position and so on. Hence, the answer is 5 6 2 3 4 1.
Input: arr = [4, 5, 2]
Output: [2, 5, 4]
Explanation: The elements of the array are 4 5 2. The reversed array will be 2 5 4.
Input: arr = [1]
Output: [1]
Explanation: The array has only single element, hence the reversed array is same as the original.
*/

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int array[], int iNo)
{
    int iCnt = 0;
    int iP1 = 0;
    int iP2 = iNo-1;

    while(iP1<iP2)
    {
        swap(array[iP1], array[iP2]);
        iP1++;
        iP2--;
    }

    cout<<"Reversed array is:"<<endl;
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        cout<<array[iCnt]<<"\t";
    }
}
int main()
{
    int iValue = 0;
    int arr[iValue] ;

    cout<<"Enter the array size:";
    cin>>iValue;

    cout<<"Enter elements:";
    int i = 0;
    for(i=0;i<iValue;i++)
    {
        cin>>arr[i];
    }

    reverseArray(arr,iValue);
    
    return 0;
}