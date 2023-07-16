#include<iostream>
using namespace std;
//	division	x/y	Divides the left hand operand by the right hand operand
//  %	modulus
//SAY DIGITS
void sayDigit( int n, string arr[]){

   //basecase
   if(n==0)
    return ;
    
   //processing
   int digit =n%10;
   n=n/10;

   //recursive call
   sayDigit(n,arr);

   cout<<arr[digit]<<" " ;
}
int main(){
 string arr[10] ={ "zero" , " one" ,"two" , "three ",
                   "four" , "five" , "six" ,"seven" ,
                   "eight" ,"nine"};

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

 sayDigit(n,arr);
 
 return 0;
}