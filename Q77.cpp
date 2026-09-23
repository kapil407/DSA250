// Q77. Check if two strings are anagrams
#include<iostream>
#include<unordered_map>

using namespace std;
int main(){
    string str1="listen";
    string str2="silenti";
        unordered_map<char,int>mp;
        if(str1.length()!=str2.length()){
            cout<<"not anagaram";
            return 0;
        }
        for(auto val:str1){
            mp[val]++;
        }    
        for(auto val:str2){
            if(mp.find(val)==mp.end()){
                cout<<"not anagram";
                return 0;
            }
        }
        cout<<"both string are anagaram ";
    return 0;
}