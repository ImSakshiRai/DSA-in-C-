#include<iostream>
using namespace std;
//print all even numbers
/*
int evenNumber(int n){

        for(int i=2; i<=n; i=i+2){
        cout<<i<< " ";
        }  
}
*/
/*
int squareof(int n){
   for(int i=1; i<=n;i++){
       cout<<i*i<<" ,";
   }
}
*/
/*
int factorial(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
*/
void Name(int n){
   for(int i=1;i<=n;i++){
       cout<<"sakshi"<<endl;
   }
}
int main(){
   int n;
    cout<<"enter number";
    cin>>n;
   
   //evenNumber(n);
    // squareof(n);


  //int fact=factorial(5);
  //cout<<fact<<endl;
    Name(n);
    return 0;
}