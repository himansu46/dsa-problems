#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int searchEle(vector<vector<int>>& matrix,int x){
    int rows=matrix.size();
    int cols=matrix[0].size();
     int rowIndex=0;
     int colIndex=cols-1;
    while(rowIndex<rows && colIndex>=0){
        int ele=matrix[rowIndex][colIndex];
        if(ele==x)
        return 1;
         if(ele<x)
        rowIndex++;
        else
        colIndex--;

    }
    return 0;
}

int main(){
    vector<vector<int>>matrix{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
   int ans;
   int Ele=10;
   ans= searchEle(matrix,Ele);
   cout<<ans;   
    return 0;
}