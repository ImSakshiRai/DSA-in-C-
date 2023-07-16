#include<iostream>
using namespace std;
//finding power of 2 
/*
int power(int n) {

    //base case 
    if(n == 0)
        return 1;

    //recursive relation
    return 2 * power(n-1);    
}

int main() {

    int n;
    cin >> n;

    int ans = power(n);

    cout << ans << endl;
}
*/
//FACTORIAL
/*
int factorial (int n){

    //basecase
    if (n==0)
         return 1;

         //recurcive relation
      int smallerprob= factorial(n-1);
      int biggerprob = n* smallerprob;  //factorial(n)=  n * factorial(n - 1);
      return biggerprob;
}
int main(){
    int n;
    cout<<"enter a positive number"<<endl;
    cin>>n;

     int ans = factorial(n);
     cout<<ans<<endl;
     return 0;
}
*/
