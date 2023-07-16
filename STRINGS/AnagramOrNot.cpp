//string a= string b then its a anagram
//same charracters,orde can be different
#include<iostream>
using namespace std;

bool checkAnagram(string a,string b){
    int freq[26]={0};
    int n1 = a.length();
    int n2 = b.length();
    //increasing count for strig a
    for(int i=0;i<a.length();i++){
        char ch =a[i];
        int index =ch-'a';
        freq[index]++;
   }
     //decreasinig count for string b
       bool flag = true;
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                return false;  
            }
            
        }
       

}
int main(){
    /*
   string str;
   cout<<"enter a string:";
   getline(cin,str);
   cout<<"you entered:"<<str<<endl;
*/
     string a="babbar";
     string b="sakshi";

    cout<<"Answer is=" <<checkAnagram(a,b)<<endl;

    return 0;
}