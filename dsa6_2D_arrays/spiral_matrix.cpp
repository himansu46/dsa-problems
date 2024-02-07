#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;


 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int startCol=0;
        int endCol=cols-1;
        int startRow=0;
        int endRow=rows-1;

        int count=0;
        int total=rows*cols;

        while(count<total){
            for(int col=startCol;count<total && col<=endCol;col++){
                ans.push_back(matrix[startRow][col]);
                count++;
            }
            startRow++;

            for(int row=startRow;count<total && row<=endRow;row++){
                ans.push_back(matrix[row][endCol]);
                count++;
            }
            endCol--;

            for(int col=endCol;count<total &&col>=startCol;col--){
                ans.push_back(matrix[endRow][col]);
                count++;
            }
            endRow--;

            for(int row=endRow;count<total && row>=startRow;row--){
                ans.push_back(matrix[row][startCol]);
                count++;
            }
            startCol++;
            }
        return ans;
    }
int main(){
    vector<vector<int>>matrix{{1,2,3},{4,5,6},{7,8,9}};
   vector <int>ans;
   ans= spiralOrder(matrix);
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
    
    return 0;
}