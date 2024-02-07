#include<iostream>
#include<stdio.h>
using namespace std;

int firstOccur(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid])
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOccur(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid])
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}




int main(){
    int arr[5]={1,3,3,3,3};
    int first=firstOccur(arr,5,3);
    int last=lastOccur(arr,5,3);
    cout<<"First Occurance is : "<<first<<endl;
    cout<<"Last Occurance is : "<<last;

    return 0;
}