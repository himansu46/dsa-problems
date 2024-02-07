#include<iostream>
#include<stdio.h>
using namespace std;


bool binarySearch(int *arr,int s,int e,int target){
   
    if(s>e)
    return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==target)
    return 1;
    else if(arr[mid]>target)
    return binarySearch(arr,s,mid-1,target);
    else
    return binarySearch(arr,mid+1,e,target);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int x=5;
    int start=0;
    int end=size-1;
    
    bool ans=binarySearch(arr,start,end,x);
    if(ans)
    cout<<"present"<<endl;
    else    
    cout<<"absent"<<endl;
    return 0;
}