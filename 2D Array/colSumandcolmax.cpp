#include<iostream>
using namespace std;

int colSum(int arr[4][2],int row,int col){
    int maxi=INT16_MIN;

       for(int i=0;i<col;i++){

            //for each row
            int sum=0;
        for(int j=0;j<row;j++){
            sum = sum+arr[j][i];
        }  
        maxi=max(maxi,sum);
        cout<<sum<<" ";  
       }
       return maxi;
    
}
int main(){
      int arr[4][2]={{1,2},{2,3},{3,4},{4,5}};

    colSum(arr,4,2);
    
    return 0;
}