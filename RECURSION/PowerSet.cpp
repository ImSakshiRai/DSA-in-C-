#include<iostream>
using namespace std;
//i/p=abc
//o/p =={a,b,c,ab,bc,ac,abc," "}
void findpowerSet(string input,int index,string output){
        //base case
        if( index == input.length()){ //jo input string h usse i bhr chla gya to print krna h output
             cout<<output;
                return;
        }
        //exclude ->sor firstly jispr hmara i ussko exclude krna h mtlb empty string me store nhi krna
        char ch = input[index];//jispe char pr i hh that one exclude 
        findpowerSet(input,index+1,output);

        //include ch->jispr i hh usse output string me lelena hh
         output.push_back(ch); //ch ko put krne ka syntax
         findpowerSet(input ,index+1,output);
}
int main(){
    
    string str="abc";
    int index=0;
    string output=" ";

    findpowerSet(str,0,output);

    return 0;
}