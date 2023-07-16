#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[],int n ){
    int ans=INT_MIN;  //-2 ki power 31

    for(int i=0;i<n;i++){
        ans=max(ans,arr[i]);
    }
    return ans;
}   
int findMin(int arr[],int n ){
    int ans=INT_MAX;  //2 ki power 31

    for(int i=0;i<n;i++){
        ans=min(ans,arr[i]);
    }
    return ans;
}  
int main(){
    int arr[]={9,8,7,6,5,4};
     
     cout<<"maximum value is"<<findMax(arr,6)<<endl;
     cout<<"minimum value is"<<findMin(arr,6)<<endl;
    return 0;
}