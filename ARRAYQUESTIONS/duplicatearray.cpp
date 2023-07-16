#include<iostream>
using namespace std;

int duplicateNumber(int arr[],int n){
      
    int count=0;
   for(int i= 0; i<n;i++){
    if(arr[i]==arr[i+1]){
        cout <<arr[i];
        break;
    }
    return count;
   }
     
}
int main(){
    int arr[]={1,2,3,3,4};

    duplicateNumber(arr,5);

  
    return 0;
}