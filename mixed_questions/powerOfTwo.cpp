// brute force technique

// #include<iostream>
// #include<stdio.h>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<=30;i++){
//         int ans=pow(2,i);
//         if(ans==n)
//         {
//             cout<<"true";
//             return 0;
//         }

//     }
//     cout<<"false";
//     return 0;
// }

#include<iostream>
#include<stdio.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=0;i<=30;i++){
        if(ans==n){
            cout<<"true";
            return 0;
        }
        if(ans<INT_MAX/2)
        ans=ans*2;
    }
    cout<<"false";
    return 0;
}