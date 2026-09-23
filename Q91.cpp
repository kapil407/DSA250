// Q91. Remove consecutive duplicate characters
#include<iostream>
using namespace std;

int main(){
    string str="aabbccsdd";
    int i=1;
    while(i<str.length()){
        int cnt=0;
        int j=i;
        while(i<str.length()&& str[i-1]==str[i]){
                cnt++;
                i++;
        }
        
        str.erase(j,cnt);
       
        i=j+1;

    }
    cout<<str;
    return 0;
}