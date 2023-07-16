#include<iostream>
using namespace std;

int main(){
    //PATTERN 14
    //A
    //BC
    //CDE
    //DEFG
    /*
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
      int j=1;
      while(j<=i){
        char ch =('A'+i+j-2);
        cout<<ch;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
    */
   
    //PATTERN 15
    //D
    //CD
    //BCD
    //ABCD
    /*
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
      int j=1;
      char start = 'A'+n-i;
      while(j<=i){
        cout<<start;
        start =start +1;
        j=j+1;
    }
      cout<<endl;
      i=i+1;
    }
  */
 
  return 0;
}
