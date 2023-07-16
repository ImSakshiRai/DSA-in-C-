#include<iostream>
using namespace std;
//i/p=n=2 2*2=4 will form 4 sets
//o/p=o1o1,1111,1001,0101,0000,1010


void findSequences(int leftSum, int rightSum, char* output, int i, int j) {
    //base case
    if(i>j){
        if( leftSum == rightSum)
            cout<<output<<endl;
            return;
    }
    //put 0,0
     output[i]='0';
     output[j]='0';
     findSequences(leftSum,rightSum,output,i+1,j-1);

    //put 1,0
     output[i]='0';
     output[j]='1';
     findSequences(leftSum,rightSum+1,output,i+1,j-1);

    //put 0,1   
    output[i]='1';
    output[j]='0';
    findSequences(leftSum+1,rightSum,output,i+1,j-1);

    //put 1,1
    output[i]='1';
    output[j]='1';
    findSequences(leftSum+1,rightSum+1,output,i+1,j-1);
    
}
int main(){
    cout << "Enter the value of n " << endl;
    int n;
    cin >> n;
//empty array
    char* arr = new char[2*n];

    findSequences(0, 0, arr, 0, 2*n-1);

    return 0;
}