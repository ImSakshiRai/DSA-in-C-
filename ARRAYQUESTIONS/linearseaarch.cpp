#include<iostream>
using namespace std;
//linear search

bool Search(int arr[],int size, int target){

    for(int i=0;i<size;i++){
         if(arr[i]== target)
            return true;
         }
    return false;
         
    }   
int main(){
    int arr[]={2,3,4,5,6};

    if(Search(arr,5,7)){
   cout<<" elemnt found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

    return 0;
}