#include<iostream>
using namespace std;

// given array is sorted or not 
bool isSorted(int arr[],int size){

    //base case
    if(size ==0 || size==1){ //agr array ka size o ya 1 hh
       return true;
    }
    if (arr[0]>arr[1]) { //agr array ka 1 element at index o is greated  
       return false;   //than array ka second elemnt at indexi 1 then it is obvoiusly not sorted
    }
  //RECURSIVE RLTN
    else {
        bool remainingpart =isSorted(arr+1 , size -1); //remaining part pf array
         return remainingpart ;
    }
}
int main(){
    
    int arr[5]= {10,13,19, 1,8 };
    int size = 5;
  bool ans =isSorted(arr,size);
  if(ans) {
      cout<< "array is sorted" <<endl;    
  }else
  cout<<"array is not sorted"<<endl;
    return 0;
}