//PEAK INDEX IN MOUNTAIN ARRAY 

#include<iostream>
using namespace std;

int peakIndexMountain(int arr[],int n,int key){
    int s =0;
    int e = n-1;

    int mid = s +(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid =s+(e-s)/2;
    }
}
int main() {
   int arr[5] = {0,0,0,1,0};

}