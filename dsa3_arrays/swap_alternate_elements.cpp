#include <iostream>
#include <stdio.h>
using namespace std;

int swapAlternate(int num[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
            swap(num[i], num[i + 1]);
    }
}
int printArray(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
}

int main()
{
    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    swapAlternate(num, size);
    printArray(num, size);
    return 0;
}