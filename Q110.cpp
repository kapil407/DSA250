// Q110. Group anagrams
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


int main(){
    vector<string>str{"eat","tea","tan","ate","nat","bat"};
    unordered_map<string,vector<string>>mp;
    unordered_map<string ,int>mp1;
    
    for(int i=0;i<str.size();i++){
        string temp=str[i];
        sort(temp.begin(),temp.end());
      
            mp[temp].push_back(str[i]);
        
    }
    vector<vector<string>>ans;
    for(auto val:mp){
       ans.push_back(val.second);
    }


    return 0;
}