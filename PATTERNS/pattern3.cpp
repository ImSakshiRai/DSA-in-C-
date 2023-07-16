#include<iostream>
using namespace std;
     //HOLLOW INVERTED HALF PYRAMID
int main(){
    int n=16;
    
     for(int row=1; row<=n;  row++){
           //for first and last row
           if(row==1||row==n){
               //print stars
               for(int col=1 ; col<=n-row+1;  col++){
                   cout<<"*";
               }
           }
           else{
               cout<<"*";
               //print space
               for(int col=1;col<=n-row-1; col++){
                   cout<<" ";
               }
               cout<<"*";
           }
   //after each row
        cout<<endl;
     }
    return 0;
}