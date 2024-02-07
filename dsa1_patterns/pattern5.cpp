#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of rows "; 
    int count =1;
    cin>>n;
    for(int i=1;i<=n;i++){
        count=i;
     for(int j=1;j<=i;j++){
       cout<<count<<" ";
       count++; 
       }
  cout<<endl;
 
}
  return 0;
}