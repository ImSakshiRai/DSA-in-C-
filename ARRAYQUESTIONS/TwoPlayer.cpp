#include<iostream>
using namespace std;
//[1,2,2,2,1]find which player won the maximum no of matches.
//1->player1
//2=>player2

void twoPlayer(int arr[],int n){

        int count1=0;
        int count2=0;

        for(int i=0;i<n;i++){

       if(arr[i]==1){
          count1++;
       }
       else
         count2++;
        }

        if(count1>count2){
            cout<<count1;
        }
        else
        cout<< count2;
}
int main(){
    int arr[]={1,2,2,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    twoPlayer(arr,5);
    return 0;
}