#include<iostream>
#include<limits.h>
using namespace std;
/*
void reverseArray(int arr[],int n){
    int i=0;
    int j=n-1;

    while(i<=j){
        swap(arr[i],arr[j]);
          i++;
          j--;  
        }
}
 */
int main(){
    int arr[]={2 ,3, 4, 5 ,6};
     int i = sizeof(arr)/sizeof(arr[0]);

        int a=0;
        int b=i-1;
        int temp;

      while(a<b){
         temp =a;
         a=b;
         b=a;

         a++;
         b--;
      }
    
    //print array
    while(i--){
    cout<<arr[i]<<" ";
    }
    cout<<endl;

/*
     //print array
    for(int i=0; i<5;i++){
     cout<<arr[i]<<" ";
     }
     cout<<endl;
     */
return 0;
}