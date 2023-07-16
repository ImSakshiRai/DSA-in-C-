#include<iostream>
using namespace std;

void twoSum(int arr[],int n,int target){
      
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            cout<<arr[i]<<arr[j];
        }
        else if(arr[i]+arr[j]>target){
                j--;
        }
        else
        i++;
    }
}
int main(){
    int arr[]={1,3,4,5,9,13,11};

    int n = sizeof(arr) / sizeof(arr[0]);
  
     twoSum(arr,7,14);

    return 0;
}