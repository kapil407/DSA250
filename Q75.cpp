// Q75. Remove duplicate characters
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    string str="banana";
    string ans="";
    
    unordered_map<char,int>mp;
    for(int i=0;i<str.length();i++){
        if(mp.find(str[i])==mp.end()){
            mp[str[i]]++;
            ans+=str[i];
        } 
    }
    
    cout<<ans;
    return 0;
}