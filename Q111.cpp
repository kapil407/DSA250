// You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

// Return the length of the longest substring containing the same letter you can get after performing the above operations.

#include<iostream>
#include<limits.h>
#include<unordered_map>
using namespace std;

int main(){
  
   string  s = "AABABBA";
   int  k = 2;
   int i=0;
   int j=0;
    int maxiF=INT_MIN;
    int maxAns=INT_MIN;
 unordered_map<char,int>mp;

    while(j<s.length()){
         mp[s[j]]++;
         maxiF=max(maxiF,mp[s[i]]);
         if(j-i+1-maxiF>k){
             mp[s[i]]--;
            if(mp[s[i]]==0){
             mp.erase(s[i]);
         }
         i++;
    }
    else{
        maxAns=max(maxAns,j-i+1);
    }
    j++;
   }
   cout<<maxAns;

    return 0;
}

