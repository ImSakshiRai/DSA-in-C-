#include<iostream>
using namespace std;
#include<iostream>
using namespace std;


bool checkPalindrome(int arr[],int n){

    int i=0;
    int j=n-1;

    while(i<j){

        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else
        
        return false;
    }
    return true;
}
int main(){
    int arr[]={1,2,5,2,6,1};

   cout<<"palindrome or not "<<checkPalindrome(arr,5);
    
    return 0;
}