#include<iostream>
using namespace std;

//FIBONACCI SERIES
//f(n) =f(n-1) +f(n+2)
/*
int fib(int n){

  //base case
  if(n==0 || n==1){
     return n;
  }
    return fib(n-1) + fib(n-2);
  }
int main() {
 int n;
 cin>> n;
 cout<< fib(n) <<endl;
}
*/

int fib(int n){
  //base case
  if( (n==0)||(n==1)){
    return n;
  }
  return fib(n-1) + fib(n-2);
}

int main(){
int n, sum = 0;
cout << "Enter the nth value: ";
cin >> n;
cout << "Fibonaacci  series: ";

while (fib( sum <=n )){
cout<<fib(sum)<< " ";
  sum ++;
}
}