#include<iostream>
using namespace std;
//arry
void printArray(int arr[],int size){
   for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
   }
}
int main(){
    
   int arr[6]={2,3,4,5,6,7};
   printArray(arr,6);


    return 0;
}