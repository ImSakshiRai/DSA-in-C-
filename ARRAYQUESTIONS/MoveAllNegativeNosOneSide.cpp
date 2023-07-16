#include<iostream>
using namespace std;
//move all negative nos to onse side of array
void MoveNegative(int arr[],int n){

 int j=0;
      for(int i=0;i<n;i++){
           if(arr[i]<0){
               if(i !=j)
              swap(arr[i],arr[j]);
             j++;
            }
}
}

int main(){
    int arr[]={2,-1,-3,1,4,-8};
    int n= sizeof(arr)/sizeof(arr[0]);

    MoveNegative(arr,n);
    for(int i=0; i<n;i++){
     cout<<arr[i]<<" ";
     }
     cout<<endl;

    return 0;
}