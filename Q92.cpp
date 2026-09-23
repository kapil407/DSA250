// Q92. Compress a string
#include<iostream>
using namespace std;

int main(){
    string str="aaabbc";;
    // result->>> a3b2c1;
    int i=1;
    string ans="";
    while(i<str.length()){
        int cnt=1;
        char ch=str[i];
        while(i<str.length() && str[i-1]==str[i]){
            cnt++;
            i++;
        }
       
        // cout<<ch<<endl<<cnt<<endl;
        ans+=ch;
        ans+=to_string(cnt);        
        i++;

    }
    if(str[str.length()-2]!=str[str.length()-1]){
          ans+=str[str.length()-1];
        ans+=to_string(1);   
    }
    cout<<ans;
    return 0;
}