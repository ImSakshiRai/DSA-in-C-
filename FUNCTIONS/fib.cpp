#include<iostream>
using namespace std;

void printFib(int n){

    int a=0;
    int b=1;

    //cout<<a<<" "<<b<<" ";//comnt this line and put a=-1 and b=1
    for(int i=0;i<n-2;i++){//i<n
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    printFib(n);
    return 0;
}