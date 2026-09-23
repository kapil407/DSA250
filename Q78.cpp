// Q78. Check if two strings are rotations
#include<iostream>
using namespace std;

int main(){
    string str1="abcd";
    string str2="cdab";
     int cnt=0;   
    while(true){
    char ch=str1[0];
    str1.erase(0,1);
    str1+=ch;
    if(str1==str2){
        cout<<"both string are rotationa "<<endl<<str1<<endl<<str2;
        return 0;
    }
    cnt++;
    if(cnt==str1.length()){
        cout<<"not rotations";
        return 0;
    }
   }
    return 0;
}