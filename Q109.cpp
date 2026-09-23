// Q109. Check if two strings are anagrams using frequency array
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){


    string str1="eat";
    string str2="tea";
    unordered_map<char,int>mp;

    if(str1.length()!=str2.length()){
        cout<<"not anagram ";
        return 0;
    }
    for(auto val:str1){
        mp[val]++;
    }

    for(int i=0;i<str2.length();i++){
        if(mp.find(str2[i])==mp.end()){
            cout<<"not anagram ";
            return 0;
        }
    }
    cout<<"anagram ";
    return 0;
}