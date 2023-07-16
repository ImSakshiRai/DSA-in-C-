//PATTERN 16
#include<iostream>
using namespace std;

int main(){
   //*
   //**
   //***
   //****
   /*
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        //space print
        int space=n-i;
        while(space){
            cout<<" ";
            space =space -1;
        }
        //star print
        int j=1;
        while(j<=i){
        cout<<"*";
        j=j+1; 
        }
        cout<<endl;
        i=i+1;
    }
    */

     //PATTERN 17
    //****
    //***
    //**
    //*

    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int start = n-i+1;
        cout<<start;
        int j=1;
        while(j<=i){
            cout<<"*";
            start =start -1;
            j=j+1;
        }
        cout<<endl;
        i =i +1;
    }

       
    

    return 0;
}


