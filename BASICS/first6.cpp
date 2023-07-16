#include<iostream>
using namespace std;

int main(){
    /*
    int n;
    cin>>n;

    int i=2;

    while(i<n) {
        if(n%i==0){
            cout<<"not prime for"<<i<<endl;
        }
        else{
            cout<<"prime for"<<i<<endl;
        }
        i=i+1;    
    }
    */

    int i=0;
    int n=0;
    int sum=0;
    
    cout<<"enter a number"<<endl;
    cin>>n;
    
    while(i<=n) {
       if(i%2==0){
           sum +=i;
       } 
       i++;  
    }
     cout<<"the sum of all even nos."<<n<< "is:" <<sum<<endl;


    return 0;
}