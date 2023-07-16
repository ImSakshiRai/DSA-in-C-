#include<iostream>
using namespace std;

int multiply(int n,int ans[],int ansSize){

    int carry = 0;
    for(int i=0;i<ansSize;i++){

        int val =n * ans[i]+carry;
        int digit = val % 10;

        ans[i]= digit;
        carry = val/10;
    }
    while(carry!=0){
        int digit = carry%10;
        ans[ansSize]=digit;
        ansSize++;
        carry = carry/10;
    }
    return ansSize;
}
void factorial (int n){
    int ans[100000]={1};
    int ansSize =1;

    for(int i=0;i<=n;i++){
        ansSize=multiply(i,ans,ansSize);
    }

    cout<<"printing the answer"<<endl;

    for(int i=ansSize-1;i>=0;i--){
        cout<<ans[i];
    }cout<<endl;
}
int main(){
    factorial(100);

    
    return 0;
}