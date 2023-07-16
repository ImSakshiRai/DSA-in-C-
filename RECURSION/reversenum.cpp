#include<iostream>
using namespace std;

void reversenum(int n,int&sum){
//base case
       if(n==0){
          cout<<sum<<endl;
          return ;
        }
  int digit = n%10;
  sum = sum*10+ digit;
  n=n/10;
  reversenum(n,sum);
}
int main(){
    int sum=0;
    reversenum(615,sum);
    return 0;
}