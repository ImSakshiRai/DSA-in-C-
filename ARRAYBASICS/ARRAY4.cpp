#include<iostream>
using namespace std;
//SWAP ATERNATES Q1 
/*
void printarray(int arr[], int n){
       
       for ( int i =0 ;  i< n; i++){
            cout << arr[i] << " ";
       }
        cout << endl;
}
void swapAlternate ( int arr [] ,int size){
    for ( int i = 0; i < size ; i+=2){
        if(  i+1   <  size){
            swap(arr[i],arr[i+1]);

        }
    }
}
int main ()  {

     int even[8] = { 5,6,7,8,9,4,2,1};
     int odd[5]= { 11, 33,9, 76 ,45};
    
     swapAlternate(even,8);
     printarray (even , 8);

     cout <<endl;

     swapAlternate(odd,5);
     printarray(odd, 5);
*/
//REVERSE THE NOS

void reverse( int arr[] , int size){
   int start = 0;
   int   end = size-1 ;
   while(start<=end) {
       swap(arr[start],arr[end]);
       start ++;
       end--;
   }
}
void printArray(int arr[],int size){
    for ( int i = 0; i<size ; i++){
         cout<< arr[i] << " ";
    }
    cout << endl;
}
int main () {


    int arr[7] = {1,2,3,4,5,6,7};
    int brr[6] = { 67,45,34,23,12,89};

    reverse(arr, 7);
    printArray(arr,7);

    reverse(brr, 6);
    printArray(brr,6);

}