#include<iostream>
#include<stack>
using namespace std;

int main(){

   int n;
   cin>>n;

   stack <int> st;
   //taking elements in stack
    while(n--){
        int data;
        cin>>data;
        st.push(data);
    }
    //printing all elemnts in stack as it is stack it will print in revrse order
    while(!st.empty()){
        cout << st.top()<<" ";
        st.pop();

    }
    cout<< endl;




    return 0;
}