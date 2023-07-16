#include<iostream>
using namespace std;
 /*
int factorial(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
int ncr(int row ,int col){
   int ans=1;
   for(int i=row;i>=col;i--){
    ans*=i;
    return int(ans/fact(row-col));
}
}
void pascalTriangle(int n){
    for(int row=0;row<=n;row++){
        for(int col=0 ; col<=row ; col++){
          cout<<;
        }
        for(int col=0; ){

        }
    }

}
*/
void pascalTriangle(int n)
{
     
for (int line = 1; line <= n; line++)
{
    int C = 1; // used to represent C(line, i)
    for (int i = 1; i <= line; i++)
    {
         
        // The first value in a line is always 1
        cout<< C<<" ";
        C = C * (line - i) / i;
    }
    cout<<endl;
}
}
int main(){
    int n;
    cout<<"enter the lines:";
    cin>>n;

    pascalTriangle(n);
    return 0;
}