#include<iostream>
using namespace std;
//finding maxima and min in aaray list

int getmin(int num[] ,int n){
      int mini = -1;
     for(int i= 0; i<n; i++){
         //if(num[i] < min){
           //  min = num[i];
           mini = min(mini, num[i]);
        }  
     return mini ; 
    } 
int getmax (int num[], int n){
    for(int i=0; i<n; i++){
        int max = -1;
        if(num[i]>max){
            max =num[i];
        }
    return max;
    } 
}  
int main() {
 
    int arr;
    cin>> arr;

    int num[100];

    //taking input in array
    for(int i=0; i<arr; i++)  {
        cin>>num[i];
    }
     cout<< "maximum value is" << getmax(num,arr) << endl;
     cout << "minimum value is" <<getmin(num,arr) <<endl;

    return 0;
}