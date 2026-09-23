// Count substrings with exactly K distinct characters
#include<iostream>
#include<unordered_map>
#include<limits.h>
using namespace std;
int Atmost_k_ele(string &str,int k){
    int i=0;
    int j=0;
    unordered_map<char ,int>mp;
    int maxCnt=0;
    while(j<str.length()){
        mp[str[j]]++;
        while(mp.size()>k){
            mp[str[i]]--;
            if(mp[str[i]]==0){
                mp.erase(str[i]);
            }
            i++;
        }
        maxCnt+=(maxCnt,j-i+1);
        j++;
    }
    cout<<maxCnt<<" ";
    return maxCnt;
}   
int main(){
    string str="pqpqs";
    int k=2;
    int ans=Atmost_k_ele(str,k)-Atmost_k_ele(str,k-1);
    cout<<ans;
    return 0;
}