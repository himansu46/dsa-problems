#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int minIndex=0;
    int arr[5]={4,1,7,3,5};
    for(int i=0;i<4;i++){
        minIndex=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}