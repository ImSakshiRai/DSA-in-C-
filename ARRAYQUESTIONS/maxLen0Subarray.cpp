#include<iostream>
#include<unordered_map>
using namespace std;
//here we returning max lenght of subarray

int maxLen(int arr[],int n){

       unordered_map<int,int> mp;
       int sum=0;
       int ans=0;
       
       for(int i=0;i<n;i++){
          sum += arr[i];

          if(mp.find(sum)!=mp.end()){
              ans =max(ans,i-mp[sum]);
          }
          else {
             mp[sum ]=i;
          }
       }
       return ans;
}
int main(){
   
    int arr[]=  {4,2,-3,1,6};

    cout<<"subarray size is of "<<maxLen(arr,5);
    return 0;
}