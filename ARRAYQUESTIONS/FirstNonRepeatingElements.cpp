#include<iostream>
#include<unordered_map>
using namespace std;



int main(){

    int arr[]={10,5,3,4,3,5,6};

     unordered_map<int,int> count;

   //now chechking by current element if its equal to a+arr[i] means elemnt of array then add the frequency in map
   for(int i=0;i<7;i++){
   int currentElement =arr[i];
    count[currentElement]++;
   }
//now traversing
   for(int i=0;i<7;i++){

      int currentElement =arr[i];
      if(count[currentElement]==1){
        cout <<currentElement<<" is the answer"<<endl;
        break;
     }
   }
 return 0;
}

