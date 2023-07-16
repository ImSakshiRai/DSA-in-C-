#include<iostream>
using namespace std;
//linear search
//and taling input and printing the array
/*
void printArray(int arr[],int n){
     for(int i=0; i<n; i++){
        cin>> arr[i] ;
    }
}
*/
bool search(int arr[],int size,int target){
      for(int i=0; i<size; i++){
          if(arr[i]==target)
              return true;    
      }
      return false;
}

int main(){
    int arr[5]={2,4,5,6,7};
    //int n;
    
   // int arr[100];
  //  cout<<"enter the number"<<endl;
    int n;
   // cin>>n;

//taking input in array
    for(int i=0; i<n; i++){
        cin>> arr[i] ;
    }

  if(search(arr,5,6)){
      cout<<"element found"<<endl;
  }
  else{
      cout<<"element not found"<<endl;
  }
     //cout<<"Your array is"<<endl;
    // printArray(arr,n);

    return 0;
}