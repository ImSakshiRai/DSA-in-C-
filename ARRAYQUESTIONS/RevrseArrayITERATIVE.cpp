#include<iostream>
using namespace std;
//revrse array
void reverseArray(int arr[],int s,int e){//only int n
                    //int i=0;int j=n-1;
      while(s<=e){ //i<j
      swap(arr[s],arr[e]);   //swap i ,j
      s++;
      e--;
      }
}
void printArray(int arr[] , int n){
for(int i=0;i<n; i++){
   cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6,9};

   int n = sizeof(arr) / sizeof(arr[0]);
   cout<<"your reverse array is"<<endl;
 
   reverseArray(arr,0,n-1);
    printArray(arr,7);//for(int i=0;i<n; i++){ dirrect for printing array
                        //cout<<arr[i]<<" ";

    return 0;
}