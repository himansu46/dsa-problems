#include <iostream>
#include <stdio.h>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start+(end-start) / 2;
    //now it will not go out of the range of the integer
    while (start <= end)
    {

        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;

        mid =  start+(end-start) / 2;
    }
    return -1;
}

int main()
{
    int arr[7] = {2, 5, 8, 10, 34, 80, 100};
    int key;
    cout << "Enter the number the to be searched:";
    cin >> key;
    int index = binarySearch(arr, 7, key);
    cout << index;
    return 0;
}