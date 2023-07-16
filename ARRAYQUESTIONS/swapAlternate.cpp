#include<iostream>
using namespace std;

void swapAlternate(int arr[],int n){
    int i=0;
    while(i<=n){//i+1<n
        //if(i+1<n){//no need then 
           swap(arr[i],arr[i+1]);
   // }
      i=i+2;
    }
}
int main(){
    int arr[]={ 2,3,4,5,6,7};

    cout<<"swappped array is:";
    swapAlternate(arr,6);
   //print array
   for(int i=0;i<6;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
    return 0;
}