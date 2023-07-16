#include<iostream>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c) 
    {
        // your code here
        //index initialisation
        int startRow = 0;
        int startCol = 0;
        int endRow = r - 1;
        int endCol = c - 1;
        
        //storing answer
        vector<int> ans;
        
        int count = 0;
        int total = r * c;
        while(count < total) {
            //printing firstRow
            for(int i=startCol;count<total && i<=endCol;i++) {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            
            //printing endCol
            for(int i=startRow;count<total && i<=endRow;i++) {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            
            //printing endRow
            for(int i=endCol;count<total && i>=startCol;i--) {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            
            //printing firstCol
            for(int i=endRow;count<total && i>=startRow;i--) {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
