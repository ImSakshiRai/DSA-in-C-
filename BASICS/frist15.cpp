// FIBONACCI SERIES USING FOR LOOP
#include<iostream>
using namespace std ;

int main ( ) {
/*
   int n;
   cin >> n;
  

   int a =0;
   int b= 1;
    
   cout << a  << " " << b << " " ;

   for ( int  i = 1; i <= n ; i++ ) {
        int nextnumber = a +b;
        cout<< nextnumber << " ";
        a =b;
        b = nextnumber;

   }
   */

  //PRIME NUMBER
  int n;
  cout << " enter the value of n"<< endl;
  cin>> n;
  bool isprime =1;

  for(int i = 2;  i<n; i++){
     if(n% i ==0)
     isprime =0;
     break;
  }
  if (isprime ==0){
     cout<< " is not a prime"<<endl;
  }
  else
  {
     cout << " is a prime" << endl;
  }
}
