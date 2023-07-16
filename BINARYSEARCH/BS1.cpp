//BINARY SEARCH

#include<iostream>
using namespace std;
//FIRST AND LAST OCC OF ELEMENT
int firstocc(int arr[],int n,int key){
    int s=0,e=n-1 ,ans =0;
    int mid =s+(e-s)/2;

    while(s<=e) {
    if (arr[mid]==key) {
          ans= mid;
          e=mid-1;
    }
    else if(arr[mid]>key){
        //right me jao
          s= mid +1;
    }
    else if(arr[mid]<key){
        //left me jao
        s=mid - 1;
    }
    mid = s+(e-s)/2 ;
    }
    return -1;
}
int Lastocc(int arr[] ,int n, int key){
    int  s=0,e = n-1,ans=0;
    int mid = s+(e-s)/2;

    while(s<=e){
        if (arr[mid]==key){
            ans=mid;
            e=mid+1;
        }
          else if(arr[mid]>key){
        //right me jao
          s= mid +1;
        }
        else if(arr[mid]<key){
        //left me jao
        s=mid - 1;
    }
    mid = s+(e-s)/2 ;
    }
    return -1;
    }

int main(){

    int even[6]={1,2,3,3,3,5};
    cout<<"first occ of 3 is"<<firstocc(even,5,3)<<endl;
}
