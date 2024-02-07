#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={3,1,6,2,9,8};
    for(int i=0;i<6-1;i++){
        for(int j=0;j<6-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}