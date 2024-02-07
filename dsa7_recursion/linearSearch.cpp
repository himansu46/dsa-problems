#include<iostream>
#include<stdio.h>
using namespace std;


bool linearSearch(int *arr,int size,int target){
    if(size==0)
    return 0;
    if(arr[0]==target)
    return 1;
    else
    return linearSearch(arr+1,size-1,target);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int x=-1;
    bool ans=linearSearch(arr,size,x);

    cout<<ans<<endl;
    
    return 0;
}