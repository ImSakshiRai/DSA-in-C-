#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};

    int a=10;
    int *p=&a;
    cout<<sizeof(p)<<endl;//64  bit ka h laptop
   // cout<<a<<endl;
    //cout<<*p<<endl;
   // cout<<&a;

cout<<(*arr)<<endl;
cout<<*(arr+1)<<endl;
cout<<*(arr+2)<<endl;
cout<<*(arr+3)<<endl;
cout<<*(arr+4)<<endl;
int i=0;
cout<<i[arr]<<endl;

char ch[5]="abcd";
char *ptr=ch;
cout<<*ptr<<endl;
        return 0;
}