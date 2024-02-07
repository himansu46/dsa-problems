#include<iostream>
#include <climits>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    int ans=0;
    int max=INT_MAX;
    int min=INT_MIN;
    cin>>n;
     while(n!=0){ 
        if(ans>max/10 || ans<min/10)
        {
            cout<<"0";
            return 0;
        }

        int digit=n%10;
        n=n/10;
        ans=ans*10+digit;
     }
     cout<<ans;
    return 0;
}