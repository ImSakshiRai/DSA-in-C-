#include<iostream>
using namespace std;

int Sort(int arr[],int n){
    //count print krao
    int zero,one,two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
             zero++;
       else if(arr[i]==1)
             one++;
        else(arr[i]==2);
             two++;     
    }
    //put zero
    int i=0;
    while(zero--){
        arr[i]=0;
        i++;
    }
    //put one
    while(one--){
        arr[i]=1;
        i++;
    }
    //put two
    while(two--){
        arr[i]=2;
        i++;
    }
}
void printarray(int arr[],int n){
    for(int i=0; i<6; i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int main(){
   
      int arr[]={1,0,2,1,0,0};

      Sort(arr,6);
     //print array
    printarray(arr,6);

     
    return 0;
}