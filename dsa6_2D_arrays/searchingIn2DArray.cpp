#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int searchEle(vector<vector<int>>& matrix,int x){
    int rows=matrix.size();
    int cols=matrix[0].size();
    int start=0;
    int end=rows* cols-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        int ele=matrix[mid/cols][mid%cols];
        if(ele==x)
        return 1;
         if(ele<x)
        start=mid+1;
        else
        end=mid-1;

        mid=start+(end-start)/2;
    }
    return 0;
}

int main(){
    vector<vector<int>>matrix{{1,2,3},{4,5,6},{7,8,9}};
   int ans;
   int Ele=80;
   ans= searchEle(matrix,Ele);
   cout<<ans;   
    return 0;
}