#include<iostream>
using namespace std;
 
 int  main() {

    int arr[5];

    cout<< " enter mdkm the elements you want" << endl;

//  input from user to array
    for (int i=0; i < 5; i++){
       cin>>arr[i];
    }

    cout << " the numbers are :";

    
 //  print array elements
    for (int n = 0; n < 5; ++n) {
        cout << arr[n] << "  ";
    }

    return 0;
}


 