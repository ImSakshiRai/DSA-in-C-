#include<iostream>
using namespace std;

int  main() {
   
//pattern 4  
  /*
    int n;
    cin>>n;

    int i=1;
    int count =1;

    while(i<=n) {
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count =count +1;
            j=j+1;
        }
        cout<<endl ;
        i=i+1;
    }  
    */ 
//pattern 5
   /*
   int n;
   cin>>n;

   int row=1;
   while(row<=n) {

    int col=1;
    while(row<=col) {
        cout<<"*";
        col=col+1;
        }
        cout<<endl;
        row=row+1;
   }
   */
  //PATTERN 6
    /*
    int n;
    cin>>n;

    int row=1;
    while(row<=n) {
        int col=1;
        while(col<=row){
            cout<<row;
            col = col +1;
        }
        cout<<endl;
        row = row+1;


    }
    */
   //pattern 7
   /*
    int n;
    cin>>n;

    int i =1;
    int val=1;
    while(i<=n){
        int j= 1;
        while(j<=i){
            cout<<val<<" ";
            val = val +1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */
    //pattern 8
   /*

   int n;
   cin>>n;

   int i=1;
  while(i<=n){
      int value=i;
       int j=1;
       while(j<=i){
           cout<<value<<" ";
           value =value +1;
           j=j+1;
       }
       cout<<endl;
       i=i+1;
}
    */
   /*
    int n;
    cin>>n;

    int row = 1;
    while (row <= n){
        int colm = 1;
        while (colm <= row){
            cout << row+colm-1;
            colm = colm + 1;      
        }
        cout << endl;
        row = row + 1;
    }
    //pattern 9
    /*
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){
       int j=1;
       while(j<=i) {
         cout<<i-j+1<<" ";
         j=j+1;
    }
    cout<<endl;
    i=i+1;
    } 
    */
   return 0;
}