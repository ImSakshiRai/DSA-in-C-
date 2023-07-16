#include<iostream>
using namespace std;

void unionArray(int arr1[], int n  ,int arr2[] , int m){
  int i= 0;
  int j=0;

    while(i<n && j<m){

        if(arr1[i]==arr2[j]){
            cout<< arr1[i]<<" ";
             i++;
             j++;
        }
        else if(arr1[i]< arr2[j]){
               
            cout<< arr1[i++]<<" ";
              
        }
        else {
        cout<<arr2[j]<<" ";
        j++;
    }
    }
    while(i<n){
     cout<<arr1[i++]<<" ";

    }
    while(j<m){
        cout<<arr2[j++]<<" ";
    }
}
int main(){
    int arr1[]={2,3,5,5,6,7};
    int arr2[]={2,9,10};


    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    unionArray(arr1,6,arr2,3);

   
    return 0;
}