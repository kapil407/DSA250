// Q81. Convert lowercase to uppercase without built-in function
// Q81. Convert uppercase to lowercase without built-in function
#include<iostream>
using namespace std;
int main(){
    string str="kapilkumar";
    string ans="";
    int i=0;
    while(i<str.length()){
        ans+=(char)str[i]-32;
        i++;
    }
    cout<<ans<<endl;
    i=0;
    string result="";
    while(i<ans.length()){
        result+=(char)ans[i]+32;
        i++;
    }
    cout<<result;
    return 0;
}