#include <iostream>
#include <stdio.h>
using namespace std;

bool search(int num[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (num[i] == key)
        {
            return 1;
        }
    }
    return 0;
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
    int key;
    cout << "Enter the number to be searched: ";
    cin >> key;
    bool found = search(num, size, key);
    if (found)
    {
        cout << "Key is present.";
    }
    else
    {
        cout << "key is absent";
    }
    return 0;
}