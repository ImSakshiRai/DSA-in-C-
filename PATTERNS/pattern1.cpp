#include<iostream>
using namespace std;

int main(){
     //for triangle like  pattern solid diamond
     int n=4;

     for(int row=1; row<=n;row++){
           //for spaces

           for(int col=1;col<=n-row;col++){
               cout<<" ";
           }
          //for stars
          for(int col=1;col<=row;col++){
              cout<<"* ";
          }
         //after each row
         cout<<endl;
     }
    

    return 0;
}