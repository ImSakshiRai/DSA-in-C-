#include<iostream>
using namespace std;

bool search(int arr[4][2],int target ,int m,int n){
    for (int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if(arr[i][j]==target){
                return true;
            }
            
        }
    }
     return false; 
}
int main(){
    int arr[4][2]={{1,2},{2,3},{3,4},{4,5}};
    cout<<"search target "<<search(arr,4,4,2)<<endl;
    return 0;
}