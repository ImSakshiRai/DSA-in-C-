#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int arr[]={1,-1,3,2,-2,-8,1,7,10,23};
    int n=10;

    vector<int> prefixsum(n);
     int sum=0;
//here finding prefix sum
    for(int i=0;i<n;i++){
         sum = sum+arr[i];
         prefixsum[i]=sum;
    }

    unordered_map<int,int> mp;
//here chechking the prefix sum is 0 or repeating element is present
    
    for(int i=0;i<n;i++){
        if(prefixsum[i]==0){
            
            cout<<"o wala scene"<<endl;
            cout<<"subarray is present"<<endl;
              break;
        }
        else if(mp[prefixsum[i]]==true){
        cout <<"same no wala scene"<<endl; 
        cout <<"sub array is present"<<endl; 
          break;
        }
      
        else{
            mp[prefixsum[i]]=true;
        }
    }
    return 0;
}