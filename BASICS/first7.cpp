//PATTERN

#include<iostream>
using namespace std;

int main(){
    /* //PATTERN 1
    int n=0;
    int i=1;

    cout<<"enter numbers of row you want"<<endl;
    cin>>n;

    while(i<=n){
        int j=1;
        while(j<=n){
          cout<<"*";
          j=j+1;    
        }
        cout<<endl;
        i= i+1;
    }
    */
   //PATTERN 2
   /*  
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        int j=1;
        while(j<=n){
           cout<< i;
           j=j+1;  
        }
        cout<< endl;
        i=i+1; 

    }
    */
    //PATTERN 3
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
        int j=1;
        while(j<=n){     
            cout<<j;  //j<=n-j+1
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}