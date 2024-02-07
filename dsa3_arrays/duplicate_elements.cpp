#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
   int ans=0;
    
    for(int i=0;i<size;i++){
        ans=ans^num[i];

    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    cout<<ans;
    return 0;
}