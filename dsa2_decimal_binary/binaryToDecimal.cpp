#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int bit = n % 10;
        if (bit == 1)
        {
            ans = ans + (bit * pow(2, i));
        }

        n = n / 10;
        i++;
    }
    cout << ans;
    return 0;
}