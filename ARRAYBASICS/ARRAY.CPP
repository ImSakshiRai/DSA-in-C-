#include<iostream>
using namespace std;

void printArray(int arr[], int size) {

  
    //print the array
    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< " printing DONE " << endl;
}


int main(){
    char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
    //cout << ch[3] << endl;

    cout<< " printing the array " << endl;
    //print the array
    for(int i =0; i<5; i++) {
        cout << ch[i] << " ";
    }
    cout<< " printing DONE " << endl;
    return 0;
}