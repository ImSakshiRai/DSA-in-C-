#include<iostream>
using namespace std;


int stairscount(int n){
    //basecase
    if (n<0)
    return 0;
    if (n==0)
    return 1;

//recurssive reltn
    return   stairscount(n-1)+ stairscount(n-2);
     
}
int main(){
  int n;
  cout<<"enter the stairs you want to climb";
  cin>>n;
 
 int ans = stairscount(n);
 cout << ans<< endl;

    return 0;
}