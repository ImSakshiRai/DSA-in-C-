//for looops
#include<iostream>
using namespace std;

  int main(){

    int n;
    cout<<" Eter the value of n " <<endl;
    cin>>n;

    cout<< " Printing the count from 1 to n  "<<endl;
     
     for( int i =1; i<=n ; i++){
        if (i<=n){
         cout<< i << endl;
        }
        else {
           break;
           i =i +1;
        } 
    }
       // for(int a =0 ,  b =1  , c= 2 ; a>= 0 && b>=1  && c>= 2; a-- ,b--){
    //    cout<<a <<" " <<b << " " << c << endl;
   // }
    
   
    cout<<" enter the value of n " << endl;
    cin >> n; 

    int sum = 0;

    for(int i =1; i <=n; i++) {
        sum += 1;
    }

     cout<< sum << endl;

return 0;
}